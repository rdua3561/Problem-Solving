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
    ListNode* rotateRight(ListNode* head, int k) {
        
           ListNode* temp=head;
    int count=1;
    
        if(temp==NULL)
           return NULL;
    
     while(temp->next!=NULL)
        {
         count++;
         temp=temp->next;
        }
    
    temp=head;
    int z=k%count;
    
    while(z--)
    {
        ListNode* p=head;

        while(temp->next!=NULL)
        {
            p=temp;
            temp=temp->next;
        }
        
        temp->next=head;
        p->next=NULL;
        head=temp;
    }
    
    return head;
    
}
};