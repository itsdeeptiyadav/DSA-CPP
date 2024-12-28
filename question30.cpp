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
    ListNode* removeZeroSumSublists(ListNode* head) {
    // Create a dummy node to handle edge cases
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
    
        std::unordered_map<int, ListNode*> prefixMap;
        prefixMap[0] = dummy; // Initialize with dummy node and prefix sum 0
    
        int prefixSum = 0;
        ListNode* current = head;
    
    // First pass: Build the prefix sum map
        while (current) {
            prefixSum += current->val;
            prefixMap[prefixSum] = current;
            current = current->next;
        }
    
    // Reset variables for second pass
         prefixSum = 0;
        current = dummy;
    
    // Second pass: Remove zero-sum sublists
        while (current) {
            prefixSum += current->val;
            current->next = prefixMap[prefixSum]->next; // Skip nodes in zero-sum sublist
            current = current->next;
        }
    
    // Return the modified list starting after the dummy node
        return dummy->next;
    }

};