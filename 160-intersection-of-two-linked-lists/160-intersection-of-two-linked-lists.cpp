/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        //Method 1: Using Set
//         unordered_set<ListNode*> s;
        
//         while(headA!=NULL)
//         {
//             s.insert(headA);
//             headA=headA->next;
//         }
        
//         while(headB!=NULL)
//         {
//             if(s.find(headB)!=s.end())
//             {
//                 return headB;
//             }
//             s.insert(headB);
//             headB=headB->next;
//         }
        
//         return NULL;
        
        //Method 2: Using Trick
        ListNode *water_man=headA;
        ListNode *fire_man=headB;
        if(headA==NULL || headB==NULL) return NULL;
        
        while(water_man!=fire_man)
        {
            if(water_man==NULL)
            {
                water_man=headB;
            }
            else  water_man=water_man->next;
             if(fire_man==NULL)
            {
                fire_man=headA;
            }
            else fire_man=fire_man->next;
           // if(water_man==NULL && fire_man==NULL) return NULL;
            
           
            
        }
        return water_man;
        
    }
};