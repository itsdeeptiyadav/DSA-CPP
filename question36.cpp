#include<iostream>
#include<vector>
#include<queue>
  
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
    std::vector<std::vector<int>> levelOrder(TreeNode* root) {
        
        std::vector<std::vector<int>> mainAns;
        if(root==NULL){
            return mainAns;
        }
        std::queue<TreeNode * >q;
        q.push(root);
        
        while(!q.empty()){
            int level=q.size();
           std:: vector<int> ans;
            
            for(int i=0 ;i<level;i++){
                TreeNode * temp=q.front();
                q.pop();
                ans.push_back(temp->val);
                if(temp->left){
                    q.push(temp->left);

                }
                if(temp->right){
                    q.push(temp->right);
                }

            }
            mainAns .push_back(ans);
        }
        return mainAns;
            
        
    }
};