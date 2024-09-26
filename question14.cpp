#include<iostream>
#include<vector>
using namespace std;
class Solution {
private:
    // Find the pivot where the rotation occurs
    int findPivot(vector<int> &nums) {
        int n = nums.size();
        int low = 0, high = n - 1;
        
        // If the array is not rotated at all
        if (nums[low] < nums[high]) {
            return -1; // No pivot
        }

        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            // Check if mid is the pivot
            if (mid < n - 1 && nums[mid] > nums[mid + 1]) {
                return mid;
            }
            // If the left half is sorted, pivot must be in the right half
            else if (nums[low] <= nums[mid]) {
                low = mid + 1;
            }
            // Otherwise, pivot must be in the left half
            else {
                high = mid - 1;
            }
        }
        return -1; // No pivot found (array is not rotated)
    }

    // Standard binary search
    int binarySearch(vector<int>& nums, int s, int e, int target) {
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return -1;
    }

public:
    // Search method for rotated sorted array
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if (n == 0) return -1;
        
        int pivot = findPivot(nums);

        // If no pivot found, do normal binary search
        if (pivot == -1) {
            return binarySearch(nums, 0, n - 1, target);
        }

        // If target is found at pivot
        if (nums[pivot] == target) {
            return pivot;
        }

        // If target is in the left sorted half
        if (target >= nums[0]) {
            return binarySearch(nums, 0, pivot, target);
        }

        // Otherwise, target is in the right sorted half
        return binarySearch(nums, pivot + 1, n - 1, target);
    }
};

