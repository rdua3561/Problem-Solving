#include<bits/stdc++.h>
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        
      ListNode* t=new ListNode(0);
        ListNode*head=t;
        
        int carry=0;
          while(l1!=NULL and l2!=NULL)
          {
              int value=l1->val+l2->val+carry;
              carry=value/10;
              t->next=new ListNode(value%10);
              
              l1=l1->next;
              l2=l2->next;
              t=t->next;
          }
        
        while(l1!=NULL)
        {
          
              int value=l1->val+carry;
              carry=value/10;
              t->next=new ListNode(value%10);
              
              l1=l1->next;
              t=t->next;
        
        }
        while(l2!=NULL)
        {
          
              int value=l2->val+carry;
              carry=value/10;
              t->next=new ListNode(value%10);
              
              l2=l2->next;
              t=t->next;
        
        }
        if(carry)
            t->next=new ListNode(carry);
        
        return head->next;
        
    }
};