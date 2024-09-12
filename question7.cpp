#include<iostream>
#include<vector>
using namespace std;
class Solution {
private:
    vector<int>findIndex(vector<vector<int>>& matrix){
        vector<int>ans;
        if(matrix.size()-1==0 && matrix[0].size()-1==0){
            if(matrix[0][0]==0){
                ans.push_back(0);
                ans.push_back(0);
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    ans.push_back(i);
                    ans.push_back(j);

                }
            }
        }
        return ans;
    }
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int>indexes=findIndex(matrix);
        if(indexes.size()==0){
            return ;
        }
        for(int j=1;j<indexes.size();j=j+2){
            for(int i=0;i<matrix.size();i++){
                int k=indexes[j];
                matrix[i][k]=0;
            }
        }
        for(int j=0;j<indexes.size();j=j+2){
            for(int i=0;i<matrix[0].size();i++){
                int k=indexes[j];
                matrix[k][i]=0;
            }
        }
        
    }
};