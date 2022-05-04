#include<bits/stdc++.h>
class Solution {
public:
    vector<vector<int>> raj;
    
    void help(vector<int>& nums,vector<int>& candidates,int i,int n, int target)
    {
        if(i==n)
        {
        if(target==0)
        {
            raj.push_back(nums);
            
        }
            return;
        }
        int l=0,r=0;
        if(candidates[i]<=target){
        nums.push_back(candidates[i]);
        help(nums,candidates,i,n,target-candidates[i]);
            nums.pop_back();
        }
        
        help(nums,candidates,i+1,n,target);
        
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector <int> nums;
        int n=candidates.size();
       int i=0;
       help(nums,candidates,i,n,target);
       return raj;
        
    }
     
    
};