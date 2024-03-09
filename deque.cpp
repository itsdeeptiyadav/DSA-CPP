#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;
    d.push_back(1);
    d.push_front(3);
    d.pop_front();
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<d.at(0);

}