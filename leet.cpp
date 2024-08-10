#include<iostream>
#include<vector>
using namespace std;
int removeElement(vector <int> &nums, int val) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                ans.push_back(nums[i]);
            }
        }
    return ans.size();
        
}
int main(){
    vector<int>s={3,4,6,3};
    int val=removeElement(s,3);
    cout<<val;

}