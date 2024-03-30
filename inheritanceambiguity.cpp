#include<iostream>
using namespace std;
class a{
    public:
    void func(){
        cout<<"hii a"<<endl;
    }

};
class b{
    public:
    void func(){
        cout<<"hii b"<<endl;
    }
};
class c:public a,public b{

};
int main(){
    c hero;
    hero.a::func();
}