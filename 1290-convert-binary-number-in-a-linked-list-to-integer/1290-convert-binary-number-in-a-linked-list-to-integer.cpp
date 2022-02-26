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
#include<bits/stdc++.h>
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        
        vector<int> a;
        
        ListNode* temp=head;
        
        while(temp!=NULL)
        {
            a.push_back(temp->val);
            temp=temp->next;
        }
        
        reverse(a.begin(),a.end());
        // for(int i=0;i<a.size();i++)
        //     cout<<a[i];
        
        int j=0;
        int sum=0;
        for(int i=0;i<=a.size()-1;i++)
        {
            sum=sum+a[i]* pow(2,j++);
        
        }
        return sum;
        
    }
};