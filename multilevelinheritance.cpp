#include<iostream>
using namespace std;
class animals{
    public:
    int age;
    int weight;
    public:
    void speaking(){
        cout<<"is speaking"<<endl;
    }
};
class dogs:public animals{
    public:
    void breed(){
        cout<<"go to other func for breed"<<endl;
        speaking();
    }
};
class germansepherd: public dogs{

};
int main(){
    germansepherd g;
    g.breed();
}