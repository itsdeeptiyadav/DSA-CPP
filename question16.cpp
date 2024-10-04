#include<iostream>
using namespace std;


struct TreeNode {
     int val;
      TreeNode *left;
     TreeNode *right;
      
};
class Solution {
private:
    pair<bool,int>fasttree(TreeNode* root){
        if(root==NULL){
            pair<bool,int>p=make_pair(true,-1);
            return p;
        }
        if(root->left==NULL && root->right==NULL){
            pair<bool,int> p= make_pair(true,root->val);
            return p;
        }
        pair<bool ,int >leftans=fasttree(root->left);
        pair<bool,int>rightans=fasttree(root->right);
        bool right =rightans.first;
        bool left=leftans.first;
        bool cond = true;
        if (root->left && root->val != leftans.second) 
        cond = false;
        if (root->right && root->val != rightans.second) 
        cond = false;
        pair<bool,int> ans;
        if(left && right && cond){
            ans.first=true;
            ans.second=root->val;
        }
        else{
            ans.first=false;
        }
        return ans;
    }
public:
    bool isUnivalTree(TreeNode* root) {
       return fasttree(root).first;
        

    }
};
