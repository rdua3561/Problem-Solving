/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
       //METHOD 1 
        // *node = *node->next;
        
        //METHOD 2
        node->val = node->next->val;
        node->next = node->next->next;
        
    }
};