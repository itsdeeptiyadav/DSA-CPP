#include<iostream>
#include<stack>
using namespace std;
class stack{
    public:
    int *arr;
    int top;
    int size;
    stack(int size){
        this->size=size;
        arr=new int(size);
        top=-1;
    }
    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"stack over--flow";
        }

    }
    void pop(){
        if(top>=0){
            top--;

        }
        else{
            cout<<"stack underflow"<<endl;

        }
 
    }
    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }

    }
    bool isempty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }

    }

};

int main(){
    // stack <int> s;
    // s.push(1);
    // s.push(20);
    // s.pop();
    // cout<<s.top()<<endl;
    // cout<<s.size();

}