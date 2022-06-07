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
   void help(ListNode* prev,ListNode* t)
   {
       if(t==NULL)
       {
           t=prev;
         
           return;
       }
       
           help(t,t->next);
           t->next=prev;
       }
     
       
    ListNode* reverseList(ListNode* head) {
   
        //Method 1: Using Array
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
        
        
        
        //Method 2:Using Pointers
//         ListNode* curr=head;
//         ListNode* prev=NULL;
//         ListNode* temp=NULL;
//         while(curr!=NULL)
//         {
//             temp=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=temp;
            
           
//         }
       
//         return prev;
        
        //Method 3: Using Vector
//         vector<int> v;
//         for(ListNode* curr=head; curr!=NULL;curr=curr->next)
//         {
//             v.push_back(curr->val);
//         }
        
//         for(ListNode* curr=head; curr!=NULL;curr=curr->next)
//         {
//             curr->val=v.back();
//             v.pop_back();
//         }
        
//         return head;
        
        //Method 4: Using recursion
        ListNode* prev=NULL;
       ListNode* rd=head;
        if(head==NULL)
            return NULL;
          while(rd->next!=NULL)
       {
           
           rd=rd->next;
       }
         help(prev,head);
        
       return rd;
    
         }
    
       
};