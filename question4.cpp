#include<iostream>
#include<string>
using namespace std;
string change(string &s){
    int ln = s.length();
 
    // Conversion according to ASCII values
    for (int i = 0; i < ln; i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            // Convert lowercase to uppercase
            s[i] = s[i] - 32;
        else if (s[i] >= 'A' && s[i] <= 'Z')
            // Convert uppercase to lowercase
            s[i] = s[i] + 32;
    }
    return s;

}
void newchange(string &s){
    int i=0;
    string a="";
    for(int i=0;i<=s.length();i++){
        if(s[i]>='a'&&s[i]<='z'){
            a=a+s[i];
            

        }
        else{
            cout<<change(a)<<endl;
            a="";
            a=a+s[i];
        }
    }
    
}
int main(){
    string s="helloPoonamMeDeepti";
    cout<<s.length()<<endl;
    newchange(s);
    
}