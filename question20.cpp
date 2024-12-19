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
    ListNode* doubleIt(ListNode* head) {
        ListNode * temp1=newreverse(head);
        ListNode * temp=temp1;
        int carry=0;
        while(temp!=NULL){
            int data=temp->val;
            int data2=((2*data)+carry);
            if(data2 >= 10){
                temp->val=data2-10;
                carry=data2/10;
            }
            else{
                temp->val=data2;
                carry=data2/10;
                


            }
            temp=temp->next;
            
            
        }
        ListNode * ans=newreverse(temp1);
        
        if(carry !=0){
            ListNode * left=new ListNode(carry);
            left->next=ans;
            return left;


        }
        else{
            return ans;
        }
        
        
    }
};