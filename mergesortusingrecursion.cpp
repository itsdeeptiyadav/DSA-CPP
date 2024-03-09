#include<iostream>
#include<array>
using namespace std;
void merge(int *arr,int s,int e){
    int mid=(s+e)/2;
    int firstlength=mid-s+1;
    int secondlength=e-mid;
    int *first=new int[firstlength];
    int *second=new int[secondlength];
    int mainarray=s;
    for(int i=0;i<firstlength;i++){
        first[i]=arr[mainarray++];


    } 
    mainarray=mid+1;
    for(int i=0;i<secondlength;i++){
        second[i]=arr[mainarray++];

    }
    mainarray=s;
    int index1=0;
    int index2=0;
    while(index1<firstlength&&index2<secondlength){
        if(first[index1]<second[index2]){
            arr[mainarray++]=first[index1++];
        }
        else{
            arr[mainarray++]=second[index2++];
        }

        

    }
    while(index1<firstlength){
        arr[mainarray++]=first[index1++];

    }
    while(index2<secondlength){
        arr[mainarray++]=second[index2++];
    }
}
void mergeSort(int *arr,int s,int e){
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);

}
int main(){
    int arr[6]={5,6,3,4,2,1};
    mergeSort(arr,0,5);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
}