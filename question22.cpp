#include<iostream>
#include<vector>
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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> result(k, nullptr); 
        int n = 0;
        ListNode* curr = head;
        while (curr != nullptr) {
            n++;
            curr = curr->next;
        }
        int baseSize = n / k;     
        int extraNodes = n % k;   
        curr = head;                
        for (int i = 0; i < k && curr != nullptr; ++i) {
            result[i] = curr;       
            int partSize = baseSize + (i < extraNodes ? 1 : 0); 

            for (int j = 1; j < partSize; ++j) {
                curr = curr->next;
            }
            ListNode* nextPart = curr->next; 
            curr->next = nullptr;           
            curr = nextPart;                
        }

        return result; 
    }
};