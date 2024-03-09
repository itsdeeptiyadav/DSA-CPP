#include<iostream>
using namespace std;
int modularexponentiation(int x,int n,int m){
    int res=1;
    while(n>0){
        if(n&1){
            res=(res*(x)%m)%m;

        }
        x=((x%m)*(x%m));
        n=n>>1;
    }
    return res;
}
