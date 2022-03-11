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
    ListNode* deleteDuplicates(ListNode* head) {
//         ListNode* prev=new ListNode(0,head);
//         ListNode* temp=head;
        
//         while(temp!=NULL)
//         {
//             if(temp->val!=temp->next->val)
//             {
//                 prev=temp;
//                 temp=temp->next;
//             }
//             else if(temp->val==temp->next->val)
//             {
//                 temp=temp->next;
//             }
            
            

//         }
            if(!head)
            return 0;
		//if list containg a single node return head
        if(!head -> next)
            return head;
        
		// keepitn val of head in a temp variable var.
        int val = head ->val;
		// temp contain the reference of next  node
        ListNode *temp = head -> next;
        
		// if the next node have different value then,
		// update head->next by temp(temp contains reference to next node)
        if(temp -> val != val)
        {
            head -> next = deleteDuplicates(temp);
            return head;
        }
        else
        {
			// if the values are same just update temp to temp->next;
           while(temp && temp -> val == val)
            {
				// assigning temp to p 
                ListNode *p = temp;
				// updating temp with next node
                temp = temp->next;
				// freeing the memory
                delete p;
            }
            return deleteDuplicates(temp);
        }
    

//         vector<int> st;
//         if(t==NULL)
//             return NULL;
        
       
//         while(t!=0)
//         {
//             st.push_back(t->val);
            
//             t=t->next;
//         }
//         t=head;
//         int n=st.size();
//         int c[700];
//         memset(c, 0, sizeof(c));
//         // for(int i=0;i<n;i++)
//         //     {
//         //     c[i]=0;
//         // }
        
//         for(int i=0;i<n;i++)
//             {
//                 c[st[i]]++;
//             }
//         ListNode* rd= new ListNode;
//          // for(int i=0;i<=n;i++)
//          //    {
//          //     cout<<c[i];
//          // }
        
//         ListNode* t2=rd;
//         int j=0;
//         for(;j<n;j++)
//         {
//             if(c[j]==1)
//             {
//                 t2->val=j;
//                 break;
//             }
//         }
        
//         j++;
//         for(;j<n;j++)
//         {
           
//             if(c[j]==1)
//             {
//                 ListNode* ud=new ListNode(j);
               
//                  t2->next=ud;
//                  t2=t2->next;
                
//             }
//         }
        
//         return rd;
        
    }
};