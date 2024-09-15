#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<vector<int>>ans={{1,2},{3,4},{0,5}};
    sort(ans.begin(),ans.end());
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<ans[i][j]<<endl;
        }
    }

}