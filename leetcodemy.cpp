#include<iostream>
#include<vector>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        for(int i=0;i<nums.size()-1;i++){
            int num1=nums[i];
            for(int j=i+1;j<nums.size();j++){
                cout<<nums[i]<<endl;
                cout<<nums[j]<<endl;
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                }
                
            }
            

        }
        return ans;
        
}
int main(){
    vector<int>x = {1,2,3,};
    twoSum(x,6);

}