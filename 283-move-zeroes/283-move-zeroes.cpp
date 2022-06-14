#include<bits/stdc++.h>
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
//         vector<int> v;
//         int n=nums.size();
//         int count=0;
//         for(int i=0;i<n;i++){
//             if(nums[i]!=0)
//             v.push_back(nums[i]);
        
//            else if(nums[i]==0)
//              count++;
//         }
    
    
//      for(int i=count;i>=0;i--)
//         v.push_back(0);
   
    
//     for(int i=0;i<n;i++)
//     {
//         nums[i]=v[i];
//     }
        int n=nums.size();
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
               {
                swap(nums[i],nums[j]);
                j++;
                }
                
        }
    }
};