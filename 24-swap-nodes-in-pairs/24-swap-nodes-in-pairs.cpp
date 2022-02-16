/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        
       
        //ListNode* q=head;
        
        if(head == NULL)
            return NULL;
        if(head->next == NULL)
            return head;
        
        ListNode* p=head->next;
        head->next = swapPairs(p->next);
        p->next = head;
        
        return p;
    
    }
};