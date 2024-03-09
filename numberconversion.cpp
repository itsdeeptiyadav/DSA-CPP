#include<iostream>
using namespace std;
void alpha(int n){
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    if(n==0){
        return ;
    }
    int digit=n%10;
    n=n/10;
    alpha(n);
    cout<<arr[digit]<<endl;
}
int main(){
    alpha(410);
    
}