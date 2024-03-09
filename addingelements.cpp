#include<iostream>
#include<vector>
using namespace std;
int add(vector<int>&nums){
    int n=nums.size();
    int number=1;
    int ans=0;
    for(int i=0;i<n-1;i++){

        for(int j=0;j<n-1-i;j++){
            number=number*10;
        }
        number=number*nums[i];
        ans=ans+number;
        number=1;

    }
    ans=ans+nums[n-1];
    return an

    }
}
int main(){
    vector<int>num={1,2,3,4};
    vector<int>h={2,3,4};
    int j=add(num);
    int k=add(h);
    cout<<j<<" ";
    cout<<k;

    int t=j+k;
    cout<<convert(t);
    
    cout<<"the sum is;"<<t;
}