#include<iostream>
#include<string>
using namespace std;
int find(int n){
    n=n+1;
    cout<<n;
}
int main(){
    string s=" my name";
    s.push_back('a');
    s.pop_back();
    cout<<s;
}