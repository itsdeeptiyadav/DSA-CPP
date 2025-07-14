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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL){
            return NULL;
        }
        ListNode* temp = head;
        int count = 0;
        while (temp != NULL && count < k) {
            temp = temp->next;
            count++;
        }
        if (count < k) 
        return head;
        ListNode * prev=NULL;
        ListNode * Newnext=NULL;
        ListNode * curr=head;
        count=0;
        while(curr!=NULL && count<k ){
            Newnext=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Newnext;
            count++;

        }
        if(Newnext!=NULL){
            head->next=reverseKGroup(curr,k);

        }
        return prev;
    }
};