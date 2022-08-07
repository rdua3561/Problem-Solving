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
    void reverse(ListNode*& l1)
    {
        ListNode* prev=NULL;
        ListNode* curr=l1;
        ListNode* aage;
        while(curr!=NULL)
        {
            aage=curr->next;
            curr->next=prev;
            prev=curr;
            curr=aage;
        }
        l1=prev;
        return;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        reverse(l1);
        reverse(l2);
        
        int carry=0;
        ListNode* temp=new ListNode(0);
        ListNode* head=temp;
        while(l1!=NULL and l2!=NULL)
        {
            int value=l1->val+l2->val+carry;
            carry=value/10;
            temp->next=new ListNode(value%10);
            temp=temp->next;
            l1=l1->next;
            l2=l2->next;
        }
       
        while(l1!=NULL)
        {
            int value=l1->val+carry;
            carry=value/10;
            temp->next=new ListNode(value%10);
            temp=temp->next;
            l1=l1->next;
        }
        
        while(l2!=NULL)
        {
            int value=l2->val+carry;
            carry=value/10;
            temp->next=new ListNode(value%10);
            temp=temp->next;
            l2=l2->next;
        }
        
        if(carry!=0)
        {
            temp->next=new ListNode(carry);
        }
        reverse(head->next);
        return head->next;
     
    }
};