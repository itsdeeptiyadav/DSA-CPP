#include<iostream>
#include<string>
#include<vector>
using namespace std;
void change(vector<string>&h,string given){
    vector<string>s={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    int k=given[0]-'0';
    int l=given[1]-'0';
    for(int i=0;i<s[k-2].size();i++){
    
    
        for(int j=0;j<s[l-2].size();j++){
            string a="";
            
            a=a+s[k-2][i]+s[l-2][j];
            h.push_back(a);
            


        }
    }

    
}
int main(){ 
    vector<string>h;
    string given="79";
    change(h,given);
    for(int i=0;i<h.size();i++){
        
        cout<<h[i]<<endl;
    }
}