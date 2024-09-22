#include<stdio.h>
// using namespace std;
// void callme(int n){
//     if(n>0){
//         callme(n-1);
//         cout<<n<<endl;
//         callme(n-1);
//         cout<<n<<endl;
//     }
// }
int main(){
    int b[2][3]={{1,2,3},{4,5,6}};
    int *d=b+1;
    printf("%d",*d);

}