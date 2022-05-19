#include<bits/stdc++.h>
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        unordered_map<int,int> mp;
        for(auto i: nums)
        {
            mp[i]++;
        }
        
        for(auto j: mp)
        {
            if((j.second)<3)
            {
                return j.first;
            }
        }
        return -1;
        
    }
};