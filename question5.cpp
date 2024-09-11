#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int row=matrix.size();
        int col=matrix[0].size();
        int total=row*col;
        int count=0;
        int startingRow=0;
        int startingCol=0;
        int endRow=row-1;
        int endCol=col-1;
        while(count<total){
            for(int index=startingCol;count<total && index<=endCol;index++){
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;
            for(int index=startingRow;count<total &&index<=endRow;index++){
                ans.push_back(matrix[index][endCol]);
                count++;
            }
            endCol--;
            for(int index=endCol;count<total &&index>=startingCol;index--){
                ans.push_back(matrix[endRow][index]);
                count++;
            }
            endRow--;
            for(int index=endRow;count<total &&index>=startingRow;index--){
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
            

        }
        return ans;
    }
};