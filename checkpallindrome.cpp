#include<iostream>
#include<string>
using namespace std;
bool checkpallindrome(string s,int i,int n){
    if(i>n){
        return true;
    }
    if(s[i]!=s[n]){
        return false;
    }
    else{
        return checkpallindrome(s,i+1,n-1);
    }
}
int main(){
    string s="rishabh";
    int n=s.length();
    cout<<boolalpha;
    cout<<checkpallindrome(s,0,n-1)<<endl;
    
}
