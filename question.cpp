#include<iostream>
#include <string>
using namespace std;
string remove(string s){
        string a="";
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                continue;
            }
            else{
                a=a+s[i];
            }

        }
        return a;
}
int myAtoi(string s) {
        string a=remove(s);
        cout<<a;
        int n=0;
        for(int i=0;i<a.length();i++){
            if(a[i]=='-'&&i==0){
            
                continue;

            }
            int x=static_cast<int>(a[i]);
            int d=x-48;
            if(d>=0&&d<=9){
                n=n*10+d;
                cout<<n;

            }
            else{
                cout<<n;
                break;
            }
            

        }
        if(a[0]=='-'){
            return -n;
        }
        else{
            return n;
        }
        
}
int main(){
    string s=" -042";
    int n=myAtoi(s);
    cout<<n;
}