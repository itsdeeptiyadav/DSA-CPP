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
    vector<int> reverse(vector<int>arr){
        int e=arr.size()-1;
        int s=0;
        while(s<=e){
            int temp=arr[s];
            arr[s]=arr[e];
            arr[e]=temp;
            s++;
            e--;
        }
        return arr;
    }
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        
        ans.push_back(0);
        if( head->next==NULL){
            return ans;
            
            
        }
        
        ListNode * reverseHead=newreverse(head);
        ListNode * curr=reverseHead;
        ListNode * prev=curr;
        int prevValue=prev->val;
        curr=curr->next;
        while(curr!=NULL){
            if(prevValue>curr->val){
                ans.push_back(prevValue);
            }
            else{
                ans.push_back(0);
                prev=curr;
                prevValue=prev->val;
            }
            curr=curr->next;
        }
        return reverse(ans);

        
    }
};