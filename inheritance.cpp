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
    male object1;
    cout<<object1.age<<endl;
    cout<<"hii"<<endl;
    cout<<object1.colour<<endl;
    object1.sleep();
    object1.setWeight(45);
    human female;
    cout<<female.age;

}