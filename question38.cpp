
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
private:
    void dfs(TreeNode* node, string path, vector<string>& paths) {
        if (!node) return;

        // Add the current node's value to the path
        path += std::to_string(node->val);

        // Check if it's a leaf node
        if (!node->left && !node->right) {
            paths.push_back(path); // Add the completed path to the list
            return;
        }

        // Continue to the left and right children with "->"
        path += "->";
        dfs(node->left, path, paths);
        dfs(node->right, path, paths);
    }

public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>paths;
        if(root==NULL){
            return paths;
        }
        dfs(root,"",paths);
        return paths;
        

    }
};