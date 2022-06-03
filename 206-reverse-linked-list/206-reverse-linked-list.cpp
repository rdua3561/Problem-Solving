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
        //Method 1
//         int i=0;
//         int c=0;
//         ListNode* p=head;
//          while(p!=NULL)
//         {
//            c++;
//             p=p->next;
//         }
        
//         int a[c+1];
//         p=head;
//         while(p!=NULL)
//         {
//             a[i++]=p->val;
//             p=p->next;
//         }
        
//         i--;
//         p=head;
        
//          while(p!=NULL)
//         {
//             p->val=a[i];
//              i--;
//             p=p->next;
//         }
        
//         return head;
        
        
        
        //Method 2
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* temp=NULL;
        while(curr!=NULL)
        {
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
            
           
        }
       
        return prev;
    }
       
};