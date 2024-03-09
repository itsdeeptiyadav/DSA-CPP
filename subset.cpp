#include<iostream>
#include<vector>
using namespace std;
void print(vector<vector<int>>nums){
    for(int i=0;i<nums.size();++i){
        for(int j=0;j<nums[i].size();++j){
            cout<<nums[i][j]<<" ";
        }
        cout<<endl;

    }
}
void solve(vector<int>nums,vector<int>output,vector<vector<int>>&ans,int index){
    if(index>=nums.size()){
        ans.push_back(output);
        return;
    }
    solve(nums,output,ans,index+1);
    int element=nums[index];
    output.push_back(element);
    solve(nums,output,ans,index+1);

}
int main(){
    vector<vector<int>>ans;
    vector<int>output;
    vector<int>nums={1,2,3};
    solve(nums,output,ans,0);
    print(ans);

}