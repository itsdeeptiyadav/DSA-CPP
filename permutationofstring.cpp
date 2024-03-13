#include<iostream>
#include<string>
#include<vector>
using namespace std;
void permutation(vector<string>&ans,string &input,int index){
    if(index>=input.length()){
        ans.push_back(input);
        return;
    }
    for(int j=index;j<input.length();j++){
        swap(input[j],input[index]);
        permutation(ans,input,index+1);
        swap(input[j],input[index]);
    }
    
    
    
}
int main(){
    string input;
    cout<<"enter the string"<<endl;
    cin>>input;
    vector<string>ans;
    permutation(ans,input,0);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

}