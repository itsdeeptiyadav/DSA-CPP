#include<iostream>
#include<climits>
#include<vector>
#include<queue>
using namespace std;
  
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class compare{
public: 
    bool operator()(ListNode *a,ListNode *b){
        return a->val>b->val;
    }

};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int k=lists.size();
        if(k==0){
            return NULL;
        }
        priority_queue<ListNode *,vector<ListNode*>,compare>minheap;
        for(int i=0;i<k;i++){
            if(lists[i] !=NULL){
                minheap.push(lists[i]);
            }
        }
        ListNode * head=NULL;
        ListNode * tail=NULL;
        while(minheap.size()>0){
            ListNode *temp=minheap.top();
            minheap.pop();
            if(temp->next!=NULL){
                minheap.push(temp->next);
            }
            if(head==NULL){
                head=temp;
                tail=temp;
            }
            else{
                tail->next=temp;
                tail=temp;
            }

        }
        return head;
    }
};