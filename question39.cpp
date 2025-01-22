#include<iostream>
#include<vector>
#include<string>
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

public:
    bool evaluateTree(TreeNode* root) {
        if (!root->left && !root->right) {
            return root->val;
        }
        bool leftans=evaluateTree(root->left);
        bool rightans=evaluateTree(root->right);
        bool ans;
        if(root->val==2){
            ans= leftans || rightans;
        }
        if(root->val == 3){
            ans= leftans && rightans;
        }
        return ans;
        
    }
};