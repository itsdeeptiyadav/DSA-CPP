#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(4);
    for(int i:v){//can be printed with this also
        cout<<i<<" ";
        
    }
    vector<int>last(v);//copy the vector in last
    v.clear();//for clearmg
    vector<int>a(5,1);//here 5 stand for no of ele and 1 stands for initialization
}