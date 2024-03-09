#include<iostream>
#include<vector>
using namespace std;
vector<int> printarray(vector<int> &a){
    for(int i:a){
        cout<<i<<" ";
    }cout<<"\n";

}
vector<int> reverse(vector<int> &a,int x){
    int s=x+1;
    int e=a.size()-1;
    while(s<=e){
        swap(a[s],a[e]);
        s++;
        e--;
    }
    return a;
    

    
}

int main(){
    vector<int>a;
    int s;
    cout<<"enter size";
    cin>>s;
    for(int i=0;i<s;i++){
        cout<<"enter element";
        int element;
        cin>>element;
        a.push_back(element);
    }
    
    int x;
    cout<<"enter the index after which u want to reverse array:";
    cin>>x;
    

    printarray(a);
    vector<int>ans=reverse(a,x);
    printarray(ans);

    

}