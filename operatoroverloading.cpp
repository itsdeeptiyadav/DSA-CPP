#include<iostream>
using namespace std;
class a{
    public:
    int x;
    int y;
    public:
    int add(){
        return x+y;
    }
    void operator+(a &obj){
        int value1=this->x;
        int value2=obj.x;
        cout<<"the sum is"<<endl<<value2-value1;
    }
    void operator()(){
        cout<<"main bracket hoon"<<endl;
    }
};
int main(){
    a obj1,obj2;
    obj1.x=7;
    obj2.x=8;
    obj1+obj2;
    obj1();

}