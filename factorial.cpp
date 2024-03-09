#include<iostream>
using namespace std;
int fact(int n,int m){
    int x=1;
    for(int i=1;i<=n;i++){
        x=((x%m)*(i%m))%m;
    }
    return x;
}
int main(){
    cout<<fact(45,10000000+7);
    
}
