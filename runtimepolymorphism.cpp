#include<iostream>
using namespace std;
class animal{
    public:
    void speak(){
        cout<<"is speaking";
    }
};
class dog:public animal{
    public:
    void speak(){
        cout<<"is barking";
    }
};
int main(){
    dog shepherd;
    shepherd.speak();
}