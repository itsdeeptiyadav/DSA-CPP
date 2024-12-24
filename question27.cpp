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
private:
    ListNode * newreverse(ListNode* &head){
        if(head == NULL||head->next==NULL){
            return head;

        }
        ListNode* chotahead=newreverse(head->next);
        ListNode * front=head->next;
        front->next=head;
        head->next=NULL;
        return chotahead;
    }
public:
    void reorderList(ListNode* head) {
        if(head==NULL ||head ->next ==NULL || head->next->next ==NULL){
            return;

        }
        
        ListNode * slow=head;
        ListNode * fast=head;
        ListNode * prev=NULL;
        while(fast!= NULL && fast->next !=NULL){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next=NULL;
         ListNode * curr2=newreverse(slow);
        ListNode * prev1;
        ListNode * prev2;
        ListNode * curr1=head;
        while(curr1!=NULL && curr2 !=NULL){
            prev1=curr1;
            prev2=curr2;
            curr1=curr1->next;
            curr2=curr2->next;
            prev1->next=prev2;
            prev2->next=curr1;
            
        }
        while(curr2!= NULL){
            prev2->next=curr2;
            prev2=prev2->next;
            curr2=curr2->next;
        }
        return;
        
    }
};