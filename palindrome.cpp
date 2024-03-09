#include<iostream>
using namespace std;
int len(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count;

}
char lower(char arr[]){
    for(int i=0;i<len(arr);i++){
        if(arr[i]>'a'&& arr[i<'z']){
            return arr[i];
        }
        else{
            char temp=arr[i]-'A'+'a';
            swap(arr[i],temp);
            return arr[i];
        }
    }
}
void palindrome(char arr[]){
    lower(arr);
    int n=0;
    int e=len(arr)-1;
    int palind=0;
    while(n<=e){
        if(arr[n]!=arr[e]){
            palind=1;
            break;
        }
        else{
            n++;
            e--;
        }

    }
    if(palind==1){
        cout<<"the string is not palindrome"<<endl;
    }
    else{
        cout<<"the string is palindrome";
    }
}
int main(){
    char name[40];
    cout<<"enter your name:"<<endl;
    cin>>name;
    palindrome(name);
}