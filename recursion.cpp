#include<iostream>
using namespace std;
double power(double n,int m){
    if(m==0){
        return 1;
    }
    return n*power(n,m-1);
}
double myPow(double x, int n){
        if(n==0){
            return 1;
        }
        return x*myPow(x,n-1);
          long long N = n;
    if (N < 0) {
        x = 1 / x;
        N = -N;
    }
    double result = 1;
    double current_product = x;
    for (long long i = N; i > 0; i /= 2) {
        if (i % 2 == 1) {
            result *= current_product;
        }
        current_product *= current_product;
    }
    return result;
}
// int fact(int n){
//     if(n==0){//base case
//         return 1;
//     }
    
//     return n*fact(n-1);
    
// }
int main(){
    double n=2;
    
    int m=10;
    cout<<myPow(n,m)<<endl;
    cout<<power(n,m);
}