#include<iostream>
#include<string>
using namespace std;
string reverse(string h){
    int s=0;
    int e=h.length()-1;
    while(s<=e){
        swap(h[s],h[e]);
        s++;
        e--;
    }
    return h;

}


int main(){
    string s="i love u manish meena";
    cout<<s<<endl;
    cout<<s.length()<<endl;
    
    
    
    string a="";
    for(int i=0;i<s.length();i++){
        

        if(s[i]!=' '){
            a=a+s[i];
            if(i==s.length()-1){
                cout<<reverse(a);
            }
        }

        
        else{
            cout<<reverse(a)<<" ";
            a="";
            
        }
    }

}
