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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        
        
        ListNode* p=head;
        ListNode* q=head;
        for(int i=1;i<left;i++)
        {
           p=p->next; 
        }
        
         for(int i=1;i<right;i++)
        {
           q=q->next;               
        }
        ListNode* temp=p;
//         stack<ListNode>s;
//         while(p!=q)
//         {
//             s.push(p->val);
//             p=p->next;
//         }
//         s.push(p->val);
    
//         while(temp!=q)
//         {
         
//             temp->val=s.pop();
//             temp=temp->next;
//         }
//         temp->val=s.pop();
        
//         return head;
        vector<int> v;
        while(p!=q)
        {
            v.push_back(p->val);
              p=p->next;
        }
        v.push_back(p->val);
        ListNode* x=NULL;
//          while(temp!=q)
//         {
         
//             temp->val=v.pop_back();
//             temp=temp->next;
//         }
//         temp->val=v.pop_back();
        reverse(v.begin(),v.end());
        int i=0;
        while(temp!=q)
        {
         
            temp->val=v[i++];
            temp=temp->next;
        }
        temp->val=v[i];
        
        
        return head;
        
        
    }
};