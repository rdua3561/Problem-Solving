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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* first=head;
        ListNode* snd=head;
        ListNode* node;
        int l=0;
        
        
        while(first!=NULL)
        {
            l++; 
            first=first->next;
            
        }
        
        if(l==n)
            return head->next;
        
        l=l-n;  
        
        for(int i=1;i<l;i++)
            snd=snd->next;
        
        //node=snd->next;
        snd->next=snd->next->next;
       // delete(node);
        return head;
        
//       ListNode* first=head;
//         ListNode* second=head;
//         for(int i=0;i<=n;i++)
//         {
//             first=first->next;
//         }
//         while(first!=NULL)
//         {
//             first=first->next;
//             second=second->next;
//         }
//         ListNode* temp=second->next;
//         second->next=second->next->next;
//         delete(temp);
        
//         return head;
     
        
    }
};