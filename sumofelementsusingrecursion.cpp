#include<iostream>
using namespace std;
int sum(int arr[],int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    else{
        
        int ans=*arr + sum(arr+1,size-1);
        return ans;
    }

}
int main(){
    int arr[4]={1,2,3,4};
    cout<<sum(arr,4);
}