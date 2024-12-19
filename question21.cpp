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
    int pairSum(ListNode* head) {
        if(head->next->next==NULL){
            return (head->val+head->next->val);
        }
        ListNode * slow=head;
        ListNode * fast=head;
        while(fast!=NULL && fast->next !=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        ListNode *reversed=newreverse(slow);
        int ans = INT_MIN;
        ListNode * temp=head;
        while(reversed !=NULL){
            if(ans<=temp->val+reversed->val){
                ans=temp->val+reversed->val;
            }
            temp=temp->next;
            reversed=reversed->next;
          
        }
        return ans;

        
    }
};