#include<stdio.h>
int main(){
    int a[3][4]={{1,11,12},{2,3,4},{4,5,6,7}};
    int *ptr= & a;
    int (*ptr1)[3][4]= & a;
    int (*ptr2)[1][4]= & a;
    // int n=***ptr1 +  ***ptr1;
    printf("%d",ptr);

}