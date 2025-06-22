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
class Solution {
    private:
        TreeNode * merge (TreeNode* root1, TreeNode* root2){
            if(root1 == NULL &&root2 == NULL){
                return NULL;
            }
            if(root2 == NULL){
                return root1;
            }
            if(root1== NULL){
                return root2;
            }
            TreeNode *x= new TreeNode (root1->val + root2->val);
            
            TreeNode* leftans=merge(root1->left,root2->left);
            TreeNode * rightans=merge(root1->right,root2->right);
            x->left=leftans;
            x->right=rightans;
            return x;
    
        }
    public:
        TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
            TreeNode *ans=merge(root1,root2);
            return ans;
            
        }
    };