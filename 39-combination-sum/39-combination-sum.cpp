#include<bits/stdc++.h>
class Solution {
public:
    //METHOD 1
    vector<vector<int>> v;
    void help(vector<int>& nums,vector<int>& candidates,int i,int n, int target)
    {
       if(i==n)
       {
           if(target==0)
           {
               v.push_back(nums);
           }
           return;
       }
        
        if(candidates[i]<=target)
        {
            nums.push_back(candidates[i]);
                target-=candidates[i];
            help(nums,candidates,i,n,target);
              nums.pop_back();
                target+=candidates[i];
            
        }
        
        help(nums,candidates,i+1,n,target);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
      int n=candidates.size();
        vector<int> nums;
        int i=0;
        help(nums,candidates,i,n,target);
        
        return v;
        
    }
     
    
};

//METHOD 2
//   vector<vector<int>> raj;
    
//     void help(vector<int>& nums,vector<int>& candidates,int i,int n, int target)
//     {
//         if(i==n)
//         {
//         if(target==0)
//         {
//             raj.push_back(nums);
            
//         }
//             return;
//         }
       
//         if(candidates[i]<=target){
//         nums.push_back(candidates[i]);
//         help(nums,candidates,i,n,target-candidates[i]);
//             nums.pop_back();
//         }
        
//         help(nums,candidates,i+1,n,target);
        
        
//     }