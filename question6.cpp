#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int rows = matrix.size();            // Number of rows
        int cols = matrix[0].size();         // Number of columns
        
        // Traverse the matrix
        for (int i = 0; i < rows - 1; ++i) {
            for (int j = 0; j < cols - 1; ++j) {
                // Compare the current element with the bottom-right diagonal element
                if (matrix[i][j] != matrix[i+1][j+1]) {
                    return false;  // If a mismatch is found, it's not a Toeplitz matrix
                }
            }
        }
        
        return true;  // All diagonals have the same elements
    }
};
