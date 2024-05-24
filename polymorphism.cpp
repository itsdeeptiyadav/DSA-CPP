#include<iostream>
#include<string>
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
    string h="hiii";
    a obj;
    obj.sayhello(h);
    obj.sayhello();
}