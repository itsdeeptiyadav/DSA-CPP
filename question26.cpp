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
    ListNode* partition(ListNode* head, int x) {
        ListNode * newhead= new ListNode (0);
        ListNode * tail= newhead;
        ListNode * temp=head;
        while(temp!=NULL){
            if(temp->val<x){
                ListNode * temp1=new ListNode(temp->val);
                tail->next=temp1;
                tail=tail->next;
            }
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL){
            if(temp->val>=x){
                ListNode * temp2=new ListNode(temp->val);
                tail->next=temp2;
                tail=tail->next;
            }
            temp=temp->next;
        }
        newhead=newhead->next;
        return newhead;

        
    }
};