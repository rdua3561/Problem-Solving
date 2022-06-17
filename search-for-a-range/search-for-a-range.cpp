#include<bits/stdc++.h>
class Solution {
    int first(vector<int> nums,int n, int target)
    {
        int l=0,h=n-1;
        int ans=-1;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(nums[mid]==target)
            {
                ans=mid;
                h=mid-1;
            }
            
            else if(nums[mid]<target)
                l=mid+1;
            
            else
                h=mid-1;
        }
       return ans; 
    }
    
  int last(vector<int> nums,int n, int target)
    {
        int l=0,h=n-1;
        int ans=-1;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(nums[mid]==target)
            {
                ans=mid;
                l=mid+1;
            }
            
            else if(nums[mid]<target)
                l=mid+1;
            
            else
                h=mid-1;
        }
       return ans; 
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        int n=nums.size();
      v.push_back(first(nums,n,target));
        v.push_back(last(nums,n,target));
        
        return v;
        
    }
};