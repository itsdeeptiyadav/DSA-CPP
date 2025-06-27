#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int maximum69Number (int num) {
        string s = to_string(num);

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '6') {
                s[i] = '9';  // change first 6 to 9
                break;       // only one change allowed
            }
        }

        return stoi(s); // convert back to int

        
    }
};