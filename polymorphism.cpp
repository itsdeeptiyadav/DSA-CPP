#include<iostream>
using namespace std;
class a{
    public:
    void sayhello(){
        cout<<"hello a";

    }
    void sayhello(string s){
        cout<<"hello";
    }

};
int main(){
    a obj;
    obj.sayhello();
}