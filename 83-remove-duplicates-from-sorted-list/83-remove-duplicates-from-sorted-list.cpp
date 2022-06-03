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
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* temp=head;
        
        
        
       while(temp!=NULL && temp->next!=NULL)
       {
           if(temp->val==temp->next->val)
           {
              //ListNode* del=temp->next;
               temp->next=temp->next->next;
               //delete(del);
           }
           else     // This else is very very important...It will fail in case of [1 1 1] 
           temp=temp->next;
       }
        
        return head;
    }
        
    
};


