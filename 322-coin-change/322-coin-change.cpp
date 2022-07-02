class Solution {
public:
    
    int help(int target,vector<int>& coins,vector<int>& dp)
    {
        if(target==0)  return 1; 
        if(target<0) return INT_MAX;
        
        if(dp[target]!=-1)  return dp[target];
        int ans=INT_MAX-1;
        for(int i=0;i<coins.size();i++)
        {
        
            ans=min(ans,help(target-coins[i],coins,dp));
        }
        return dp[target]=ans+1;
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(100001,-1);
       int ans=help(amount,coins,dp);
        if(ans>=INT_MAX)
            return -1;
        
        return ans-1;
        
    }
};