#include<iostream>
using namespace std;
class human{
    public:
    int age;
    int weight;
    int height;
    public:
    int getAge(){
        return age;
    }
    void setWeight(int w){
        this->weight=w;
    }

};
class male:public human{
    public:
    string colour;
    void sleep(){
        cout<<"person is sleeping"<<endl;
    }
};
int main(){
  male m1;
  cout<<m1.height;

}