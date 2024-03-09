#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<char> printarray(vector<char> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }cout<<"\n";

}
int erase(vector<char> &a){
    int i=0;
    int ansindex=0;
    while(i<a.size()){
        int j=i+1;
        while(j<a.size()&&a[i]==a[j]){
            j++;
        }
        
        a[ansindex++]=a[i];
        int count=j-i;
        if(count>1){
            string s=to_string(count);
            for(char ch: s){
                a[ansindex++]=ch;
                
            }
        }
        i=j;


    }
    a.resize(ansindex);
    return ansindex;
}
int main(){
    vector<char>a={'a','a','a','e','b','b','c','c','c','d'};
    printarray(a);
    cout<<erase(a)<<endl;
    printarray(a);
    
    

}

