#include<stdio.h>
int fun(int n){
    static int i=010;
    if(n>=5){
        return n;
    }
    n=n+i;
    i++;
    return fun(n);
}
int main(){
    int a[10][20];
    printf("%d");
}