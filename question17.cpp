
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
    ListNode* oddEvenList(ListNode* head){
        if(head==NULL ||head->next==NULL){
            return head;
        }
        ListNode * firstodd=head;
        ListNode * firsteven=head->next;
        ListNode * odd=firstodd;
        ListNode * even=firsteven;
        while(even !=NULL && even->next!=NULL){
            odd->next=even->next;
            odd=odd->next;

            even->next=odd->next;
            even=even->next;
        }
        odd->next=firsteven;
        return firstodd;


        
    }
};