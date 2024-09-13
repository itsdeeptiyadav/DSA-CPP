#include<iostream>
#include<vector>
using namespace std;
class Solution {
private:
    int findmax(vector<vector<int>>& matrix,int j){
        int k=-1000;
        for(int i=0;i<matrix.size();i++){
            if(matrix[i][j]>=k){
                k=matrix[i][j];
            }

        }
        return k;
    }    
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        
        int rows=matrix.size();
        int cols=matrix[0].size();
        vector<vector<int>>ans(rows,vector<int>(cols));
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==-1){
                    int max=findmax(matrix,j);
                    ans[i][j]=max;
                }
                else{
                    ans[i][j]=matrix[i][j];
                }
            }
        }
        return ans;
        
    }
};

