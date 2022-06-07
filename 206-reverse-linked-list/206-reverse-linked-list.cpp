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
   void help(ListNode* prev,ListNode* head) {

	   if(head==NULL)     //Base Case
	   {
		   head=prev;
		   return;
	   }
   
       help(head,head->next);         //Recursive Call
       head->next=prev;              //Small Work while Returning
   }
 
   
ListNode* reverseList(ListNode* head) {
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