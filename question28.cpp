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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode * firstNode =list1;
        ListNode * secondNode =list1;
        int x=0;
        int y=0;
        while(x<a-1 && firstNode!=NULL){
            x++;
            firstNode =firstNode ->next;

        }
        while(y<b+1 && secondNode != NULL){
            y++;
            secondNode =secondNode->next;

        }
        ListNode * start=list2;
        ListNode * end=list2;
        while(end->next !=NULL){
            end=end->next;

        }
        firstNode ->next=start;
        end->next=secondNode;
        return list1;
        
    }
};