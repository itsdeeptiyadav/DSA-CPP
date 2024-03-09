#include<iostream>
#include<string>
using namespace std;
char getmax(string a){
    int arr[26]={0};
    int number=0;

    for(int i=0;i<a.length();i++){
        if(a[i]>='a'&&a[i]<='z'){
            number=a[i]-'a';

        }
        else{
            number=a[i]-'A';
        }
        arr[number]++;
    }
    int maxi=-1;
    int ans;
    for(int i=0;i<26;i++){
       if(maxi<arr[i]){
        ans=i;
        maxi=arr[i];
        

       }

    }
    return ans+'a';

    
}
int main(){
    string s="I HATE to be with u but i love u";
    cout<<getmax(s);

}
