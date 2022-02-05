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
    ListNode* reverseList(ListNode* head) {
        
        int i=0;
        int c=0;
        ListNode* p=head;
         while(p!=NULL)
        {
           c++;
            p=p->next;
        }
        
        int a[c+1];
        p=head;
        while(p!=NULL)
        {
            a[i++]=p->val;
            p=p->next;
        }
        
        i--;
        p=head;
        
         while(p!=NULL)
        {
            p->val=a[i];
             i--;
            p=p->next;
        }
        
        return head;
        
    }
};