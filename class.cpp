#include<iostream>
using namespace std;
class hero{
    private:
    int health;
    char level;
    public:
    hero(int health,char level){
        this->health=health;
        this->level=level;
        cout<<"constructor"<<endl;
    }
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
    hero ramesh(10,'g');
    cout<<&ramesh<<endl;
    cout<<ramesh.getHealth()<<endl;
    cout<<ramesh.getLevel();

}