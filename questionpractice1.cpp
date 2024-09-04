#include<iostream>
#include<vector>
using namespace std;
int removeElement(vector<int>& nums, int val) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                ans.push_back(nums[i]);
            }
        }
        return ans.size();
}
int main(){
    vector<int>ans={3,2,2,3};
    int a=removeElement(ans,3);
    cout<<a;
}