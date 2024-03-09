#include<iostream>
using namespace std;
int & update(int a){
    int & ans=a;
    return ans;
}
int main(){

    //char ch[5]={'f','c','b','d','e'};
    
    //char *c=&ch[0];
    //cout<<c;
    // int s=9;
    // int *p=&s;
    // int **k=&p;
    int i=5;
    int x=update(i);
    cout<<x<<endl;


}