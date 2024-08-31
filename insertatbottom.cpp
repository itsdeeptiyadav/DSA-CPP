#include<iostream>
#include<stack>
#include<string>
using namespace std;
void insert(stack<int>&s,int x){
    if(s.empty()){
        s.push(x);
        return;


    }
    int num=s.top();
    s.pop();
    insert(s,x);
    s.push(num);

}
int main(){
    stack<int>s;
    s.push(2);
    s.push(6);
    s.push(10);
    s.push(8);
    
}