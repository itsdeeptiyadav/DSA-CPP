#include<iostream>
using namespace std;
class animal{
    public:
    int weight;
    int height;
    void bark(){
        cout<<"is barking"<<endl;
    }
};
class human{
    public:
    string colour;
    void speak(){
        cout<<"speaking"<<endl;
    }
};
class hybrid:public animal,public human{

};
int main(){
    hybrid obj1;
    obj1.speak();
    obj1.bark();
}