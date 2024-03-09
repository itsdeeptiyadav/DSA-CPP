#include<iostream>
using namespace std;
int power(int n,int m){
    if(m==0){
        return 1;
    }
    return n*power(n,m-1);
}
int fact(int n){
    if(n==0){//base case
        return 1;
    }
    
    return n*fact(n-1);
    
}
int main(){
    int n=6;
    cout<<fact(n)<<endl;
    int m=5;
    cout<<power(n,m);
}