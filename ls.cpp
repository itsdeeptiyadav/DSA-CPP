#include<iostream>
using namespace std;
int ls(int *arr,int s,int n,int se){
    if(*(arr+s)==se){
        return s;

    }
    else if(s==n){
        return -1;
    }
    else{
        ls(arr,s+1,n,se);
    }
}
int binarys(int *arr,int s,int e,int ans){
    int mid=(s+e)/2;
    if(*(arr+mid)==ans){
        return mid;

    }
    else if(s>e){
        return -1;
    }
    else if(*(arr+mid)>ans){
        binarys(arr,s,mid-1,ans);
    }
    else{
        binarys(arr,mid+1,e,ans);
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<ls(arr,0,5,3);
}