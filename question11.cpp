#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxReach = 0;  // The farthest index we can reach
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            if (i > maxReach) {
                // If the current index is beyond the farthest we can reach, we can't proceed
                return false;
            }
            // Update the farthest index we can reach
            maxReach = max(maxReach, i + nums[i]);
            if (maxReach >= n - 1) {
                return true;  // We can reach the last index
            }
        }
        return false;  // We never managed to reach the last index
    }
};
