#include<bits/stdc++.h>
class Solution {
public:
    //Method 1:Brute Force TC=O(n^2)
//     vector<int> twoSum(vector<int>& nums, int target) {
        
//         vector <int> p;
//         int size=nums.size();
        
//         for(int i=0;i<size;i++)
//         {
//             for(int j=i+1;j<size;j++)
//             {
//                 if(nums[i]+nums[j]==target)
//                 {
//                     p.push_back(i);
//                     p.push_back(j);
//                     break;
//                 }
//             }
//             if(p.size()==2)
//                 break;
//         }
//         return p;
//     }
    
    //Method 2:Unordered Map
    
    vector<int> twoSum(vector<int>& nums, int target)
    {
//         unordered_map<int,int> mp;
//         vector<int> v;
        
//         for(int i=0;i<nums.size();i++)
//         {
//             mp[nums[i]]=i;
//         }
        
//         for(int i=0;i<nums.size();i++)
//         {
//             int ans=target-(nums[i]);
            
//             if(mp.find(ans)!=mp.end())
//             {
//                 v.push_back(i);
//             }
            
//             mp[nums[i]]=i;
//         }
        
//         return v;
        
        unordered_map<int,int> mp;
        vector<int> v;
        
       
        
        for(int i=0;i<nums.size();i++)
        {
            int ans=target-nums[i];
            if(mp.find(ans)!=mp.end())
            {
                v.push_back(mp[target-nums[i]]);
                v.push_back(i);
            }
            mp[nums[i]]=i;
        }
        return v;

    }
};