#include<iostream>
#include<stack>
#include<string>
using namespace std;
void solve(stack<int>&inputstack,int size,int count){
    if(count==size/2){
        inputstack.pop();
        return;
    }
    int num=inputstack.top();
    inputstack.pop();
    solve(inputstack,size,count+1);
    inputstack.push(num);
}