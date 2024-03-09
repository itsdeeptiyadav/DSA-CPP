#include<iostream>
#include<string>
using namespace std;
string removesubstring(string s,string a){
    int x=a.length();

    string temp="";
    int i=0;
    int issubstring=0;
    while(i<s.length()){
        if(s[i]==a[0]){
            for(int j=1;j<a.length();j++){
                if(s[i+j]==a[j]){
                    issubstring=1;
                
                
                }
                else{
                    issubstring=0;
                    break;
                }
            }
            if(issubstring==1){
                temp.push_back(' ');
                i=i+x;
            }
            else{
                temp.push_back(s[i]);
                i++;
            }
        }
        else{
            temp.push_back(s[i]);
            i++;
        }

    }
    return temp;
}
int main(){
    string s="my name is deepti deepjyoti deep deepanshu";
    string a="deep";
    cout<<"the output is:"<<endl;
    cout<<removesubstring(s,a)<<endl;
    cout<<s;
}