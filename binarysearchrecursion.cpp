#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
    if(size==0){
        return false;

    }
    if(size==1){
        if(arr[0]==key){
            return true;
        }
        else{
            return false;
        }
    }
    int mid=size/2;
    if(arr[mid]==key){
        return true;
    }
    else{
        if(arr[mid]>key){
            return search(arr,size-mid,key);
        }
        else{
            return search(arr+mid,size-mid,key);
        }
    }
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<boolalpha;
    cout<<search(arr,10,9);
}