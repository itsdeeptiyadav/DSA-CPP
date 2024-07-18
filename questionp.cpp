#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
bool isValid(string s) {
        bool isstring=true;
        unordered_map<char,char>myMap={{'(',')'},{'{','}'},{'[',']'}};
        for(int i=0;i<s.length();i=i+2){
            if(s[i]==' '){
                continue;
            }
            else if(s[i+1]!=myMap[s[i]]){
                isstring=false;
                break;
            }
        }
        return isstring;
}
int main(){
    string s="()[]{}";
    cout<<boolalpha;
    cout<<isValid(s);
}