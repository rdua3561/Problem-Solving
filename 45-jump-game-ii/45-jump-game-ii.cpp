class Solution {
public:
    int help(int i,vector<int>& nums,int n,vector<int> & dp)
    {
        if(i==n-1) return 0;
        
        int mini=INT_MAX;
        if(dp[i]!=-1) return dp[i];
        for(int j=1;j<=nums[i];j++)
        {
            if(i+j<n)
                mini=min(mini+0LL,1LL+help(i+j,nums,n,dp));
        }
        return dp[i]=mini;
    }
 
    
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        return help(0,nums,n,dp);
    }
};