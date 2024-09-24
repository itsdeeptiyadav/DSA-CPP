#include<iostream>
#include<vector>

using namespace std;
class Solution {
private:
    void getMin(vector<int>&nums,int multiplier){
        int j=-100;
        int n;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<j){
                j=nums[i];
                n=i;
            }


        }
        nums[n]=multiplier*j;
    }

public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for(int i=0;i<k;i++){
           getMin(nums,multiplier);
        }
        return nums;
        
    }
};
