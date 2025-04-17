#include<climits>
#include<iostream>
using namespace std;

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class info{
public:
    int maxi;
    int mini;
    bool isBst;
    int sum;
};
info solve(TreeNode *root,int &ans){
    if(root==NULL){
        return {INT_MIN,INT_MAX,true,0};
    }
    info left = solve(root->left,ans);
    info right= solve(root->right,ans);
    info currNode;
    currNode.sum=left.sum+right.sum + root->val;
    currNode.maxi=max(root->val,right.maxi);
    currNode.mini=min(root->val,left.mini);
    if(left.isBst && right.isBst &&(root->val>left.maxi && root->val<right.mini)){
        currNode.isBst=true;
    }
    else{
        currNode.isBst=false;
    }
    if(currNode.isBst){
        ans=max(currNode.sum ,ans);
    }
    return currNode;

}
class Solution {

public:
    int maxSumBST(TreeNode* root) {
        int maxsize=0;
        info temp=solve(root,maxsize);
        return maxsize;
        
    }
};