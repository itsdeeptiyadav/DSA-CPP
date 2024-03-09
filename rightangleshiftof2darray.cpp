#include<iostream>
#include<cstring>
using namespace std;
int shift(int arr[3][3],int n,int m){
    int i=0;
    for(int j=0;j<m;j++){
        swap(arr[i][j],arr[n-1-i][j]);
    }
    int b[3][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            b[i][j]=arr[j][i];
        }
    }
    memcpy(arr,b,sizeof(b));
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }
    return arr[3][3];
}
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    shift(arr,3,3);
    
    

}
