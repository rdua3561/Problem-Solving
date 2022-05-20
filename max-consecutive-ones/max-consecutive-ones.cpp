#include<bits/stdc++.h>
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum=0;
        int res=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                sum=0;
            }
            else
            {
                sum+=1;
                
                res=max(sum,res);
            }
        }
        return res;
    }
};