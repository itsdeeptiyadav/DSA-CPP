#include<iostream>
using namespace std;
class hero{
    private:
    int health;
    char level;
    public:
    int getHealth(){
        return health;

    }
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health =h;
    }
    void setLevel(char ch){
        level=ch;

    }
};
int main(){
    hero ramesh;
    ramesh.setHealth(70);
    cout<<ramesh.getHealth();

}