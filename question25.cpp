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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;
        int n = 1; 
        ListNode* tail = head;
        while (tail->next) {
            tail = tail->next;
            n++;
        }

       
        k %= n;
        if (k == 0) return head;
        int stepsToNewTail = n - k - 1;
        ListNode* newTail = head;
        while (stepsToNewTail--) {
            newTail = newTail->next;
        }

        ListNode* newHead = newTail->next;
        newTail->next = nullptr; 
        tail->next = head;       

        return newHead;          
    }
};