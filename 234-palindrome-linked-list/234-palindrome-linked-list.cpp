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
    bool isPalindrome(ListNode* head) {
        ListNode* p=head;
        int c=0;
    
        while(p!=NULL)
        {
            p=p->next;
            c++;
        

        }
        
        int arr[c+1];
        p=head;
       int i=0;
        while(p!=NULL)
        {
            arr[i++]=p->val;
            p=p->next;

        }
        i=i-1;
        p=head;
        while(p!=NULL)
        {
            if(arr[i]!=p->val)
            {
                return 0;
            }
            i--;
            p=p->next;
        }
        return true;
        
        
    }
};