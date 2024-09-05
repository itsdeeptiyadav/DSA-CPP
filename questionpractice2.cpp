#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        bool isfound=false;
        int ans=0;
       for(int i=0;i<haystack.length();i++){
            if(haystack[i]==needle[0]){
                isfound=true;
                int j=1;
                while(j<needle.length()){
                    if(haystack[i+j]==needle[j]){
                         j++;
                         isfound=true;

                    }
                    else{
                        isfound=false;
                        break;
                    }

                }

            }
            if(isfound){
               ans=i;
              break;
            }
       }
       if(isfound){
        return ans;
       }
       else{
        return -1;
       }

    }
};