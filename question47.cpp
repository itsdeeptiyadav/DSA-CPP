#include<iostream>
#include<vector>
using namespace std;
class Solution {
private:
    void add(vector<vector<string>> &ans,vector<vector<int>> & board,int n){
        vector<string> temp;
        for(int i=0;i<n;i++){
            string str="";
            for(int j=0;j<n ;j ++){
                if(board[i][j]==0){
                    str=str+".";
                }
                else{
                    str=str+"Q";
                }
            }
            temp.push_back(str);
        }
        ans.push_back(temp);
    }
    bool issafe(int row,int col,vector<vector<int>>& board,int n){
        int x=row;
        int y=col;
        while(y>=0){
            if(board[x][y]==1){
            return false;
            }
            y--;
        
        }
        x=row;
        y=col;
        while(x>=0&& y>=0){
            if(board[x][y]==1){
                return false;
            }
            y--;
            x--;
        }
        x=row;
        y=col;
        while(x<n&& y>=0){
            if(board[x][y]==1){
                return false;
            }
            x++;
            y--;
        }
        return true;


    }
    void solve(int col,vector<vector<string>> & ans,vector<vector<int>> & board,int n){
        if(col==n){
            add(ans,board,n);
            return ;
        }
        for(int row=0;row<n;row++){
            if(issafe(row,col,board,n)){
                board[row][col]=1;
                solve(col+1,ans,board,n);
                board[row][col]=0;
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<vector<int>>board(n,vector<int>(n,0));
        solve(0,ans,board,n);
        return ans;
        
    }
};