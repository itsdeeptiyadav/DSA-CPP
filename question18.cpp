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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode * firstNode=head;
        ListNode * secondNode=head;
        ListNode * temp=head;
        int i=0;
        int firstcount=1;
        int secondcount=0;
        while(temp!=NULL){
            i++;
            temp=temp->next;
        }
        
        while(firstNode !=NULL && firstcount<k){
            firstNode=firstNode->next;
            firstcount++;
        }
        while(secondNode !=NULL && secondcount <i-k){
            secondNode=secondNode->next;
            secondcount++;
        }
        int data=firstNode->val;
        firstNode->val=secondNode->val;
        secondNode->val=data;
        return head;
    }
};
