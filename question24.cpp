#include<iostream>
#include<vector>
#include<stack>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {

public:
     vector<int> nextLargerNodes(ListNode* head) {
        vector<int> values;  
        vector<int> result;  
        stack<int> stk;      
        while (head != nullptr) {
            values.push_back(head->val);
            head = head->next;
        }

        result.resize(values.size(), 0); 
        for (int i = values.size() - 1; i >= 0; --i) {
            while (!stk.empty() && stk.top() <= values[i]) {
                stk.pop();
            }
            if (!stk.empty()) {
                result[i] = stk.top();
            }
            stk.push(values[i]);
        }

        return result;
    }
};