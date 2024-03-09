#include<iostream>
using namespace std;
bool found(int arr[],int size,int key){
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;

    }
    
    int ans=found(arr+1,size-1,key);
    return ans;
}
int main(){
    int arr[4]={1,23,4,5};
    cout<<boolalpha;
    cout<<found(arr,4,9);
}