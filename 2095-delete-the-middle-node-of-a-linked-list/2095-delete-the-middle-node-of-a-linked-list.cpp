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
    ListNode* deleteMiddle(ListNode* head) {
        
        if (head == NULL) {
          return NULL;
       }
       if (head->next == NULL) {
          delete head;
          return NULL;
       }
        
        ListNode* first=head;
        ListNode* temp=head;
        ListNode* prev=NULL;
        
        while(first!=NULL and first->next!=NULL)
        {
            
            
            prev=temp;
            temp=temp->next;
            first=first->next->next;
        }
        prev->next=temp->next;
        delete temp;
        
        return head;
    }
};