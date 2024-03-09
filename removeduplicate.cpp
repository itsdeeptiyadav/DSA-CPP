#include<iostream>
#include<string>
using namespace std;
string removeadjacentduplicate(string s){
    int i=0;
    while(i<s.length()){
        if(s[i]==s[i+1]){
            s.erase(i,2);
            if(i==0){
                i=i;
            }
            else{
                i--;
            }

        }
        else{
            i++;
        }
    }
    return s;
}
int main(){
    string s="azxxzy";
    cout<<removeadjacentduplicate(s);
    
}