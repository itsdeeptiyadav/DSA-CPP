#include<iostream>
#include<stack>
#include<string>
using namespace std;
void reversing(stack<int>&s){
    
    if(s.empty()){
        s.push(num);
    }
    
    s.pop();
    reversing(s);
    s.push(num);

}
int main(){
    stack<int>s;
    s.push(2);
    s.push(6);
    s.push(10);
    s.push(8);
    cout<<s.top()<<endl;
    reversing(s);
    cout<<s.top();
}