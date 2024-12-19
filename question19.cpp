#include<iostream>
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
    void deleteNode(ListNode* node) {
        int data=node->val;
        node->val=node->next->val;
        node->next->val=data;
        ListNode * newnext=node->next;
        node->next=newnext->next;
        newnext->next=NULL;
        
    }
};