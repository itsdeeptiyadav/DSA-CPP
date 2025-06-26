#include<iostream>
#include<vector>
#include<queue>
#include<climits>
using namespace std;
class node{
public:
    int data ;
    int row;
    int col;
    node(int d,int r,int c){
        this->data=d;
        this->row=r;
        this->col=c;
    }

};
class compare{
public:
    bool operator()(node *a,node *b){
        return a->data>b->data;
    }
};


class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        priority_queue<node*,vector<node*>,compare>miniHeap;
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            mini=min(mini,nums[i][0]);
            maxi=max(maxi,nums[i][0]);
            node * temp=new node(nums[i][0],i,0);
            miniHeap.push(temp);
        } 
        int start=mini;
        int end=maxi;
        while(!miniHeap.empty()){
            node * top1=miniHeap.top();
            miniHeap.pop();
            mini=top1->data;
            if(maxi-mini<end-start){
                end=maxi;
                start=mini;
            }
            if(top1->col+1 <nums[top1->row].size()){
                maxi=max(maxi,nums[top1->row][top1->col + 1]);
                miniHeap.push(new node (nums[top1->row][top1->col + 1],top1->row,top1->col+1));
            }
            else{
                break;
            }
        }
        vector<int>ans;
        ans.push_back(start);
        ans.push_back(end);
        return ans;

        
    }
};