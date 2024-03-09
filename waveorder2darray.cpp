#include<iostream>
using namespace std;
int input(int arr[3][2],int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"enter element at"<<i<<j<<endl;
            cin>>arr[i][j];
        }
    }
    return arr[3][2];
}
int output(int arr[3][2],int n,int m){
    for(int i=0;i<m;i++){
        if(i&1){
            for(int j=0;j<n;j++){
        
            cout<<arr[j][i]<<" ";

            
            
             }
             cout<<endl;
             
        }
        else{
            for(int j=n-1;j>=0;j--){
        
            cout<<arr[j][i]<<" ";
            }
            cout<<endl;

            
            
        }
        
    }
}
int main(){
    int arr[3][2];
    input(arr,3,2);
    output(arr,3,2);
}