#include<iostream>
using namespace std;
void findnew(int *a,int *b ,int *c){
    *a=*a+*b+*c;
    a=c;
    b=c;
    *b=*a+*b+*c;
    *c=*a+*b+*c;
    cout<<*a<<endl;
    cout<<*b<<endl;
    cout<<*c<<endl;
}
int main(){
    int a=10;
    int b=20;
    findnew(&a,&a,&b);
}