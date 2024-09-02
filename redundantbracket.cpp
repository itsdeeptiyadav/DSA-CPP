#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool redundant(string s){
    stack<char>st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('||s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'){
            st.push(s[i]);
        }
        else{
            if(s[i]==')'){
                bool isredundant=true;
                while(st.top()!='('){
                    char top=st.top();
                    if(top=='+'||top=='-'||top=='*'||top=='/'){
                        isredundant=false;

                    }
                    st.pop();

                }
                if(isredundant==true){
                    return true;
                }
                st.pop();
            }
        }
    }
    return false;
}
int main(){
    string s="(a+b-(a*b))";
    cout<<boolalpha;
    cout<<redundant(s);
}