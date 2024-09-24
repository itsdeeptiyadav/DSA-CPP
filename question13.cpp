#include<iostream>
#include<vector>
using namespace std;
class Solution {
private:
    int binarySearch(vector<int>& nums, int s, int e, int target) {
        if (s > e) {
            return -1;
        }

        int mid = s + (e - s) / 2;

        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] > target) {
            return binarySearch(nums, s, mid - 1, target);
        } else {
            return binarySearch(nums, mid + 1, e, target);
        }
    }

public:
    vector<int> searchRange(vector <int>& nums, int target) {
        vector<int> ans;

        // Perform binary search to find one occurrence of target
        int n = binarySearch(nums, 0, nums.size() - 1, target);

        if (n == -1) {
            ans.push_back(-1);  // Target not found
            ans.push_back(-1);
            return ans;
        }

        // Expand the range by moving left and right from the found index
        int j = n;
        int k = n;

        // Find the left boundary
        while (j >= 0 && nums[j] == target) {
            j--;
        }

        // Find the right boundary
        while (k < nums.size() && nums[k] == target) {
            k++;
        }

        // Push the boundaries (adjusting j and k to their correct positions)
        ans.push_back(j + 1);
        ans.push_back(k - 1);

        return ans;
    }
};