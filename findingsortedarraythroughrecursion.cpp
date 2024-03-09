#include<iostream>
using namespace std;
bool issorted(int arr[],int size){
    if(size==0||size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool ans=issorted(arr+1,size-1);
        return ans;
    }
}
int main(){
    int arr[5]={1,2,3,9,9};
    cout<<boolalpha;
    cout<<issorted(arr,5);
}