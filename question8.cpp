#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int rows = mat.size();
        int cols = mat[0].size();
        
        // Check if reshaping is possible
        if (rows * cols != r * c) {
            return mat;  // Return original matrix if dimensions don't match
        }

        // Create the result matrix with r rows and c columns
        vector<vector<int>> ans(r, vector<int>(c));
        
        // Flatten the original matrix and then fill the reshaped matrix
        int count = 0;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                ans[count / c][count % c] = mat[i][j];
                count++;
            }
        }
        
        return ans;
    }
};
