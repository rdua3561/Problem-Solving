class Solution {
public:
    
   int solve(vector<int>&nums,int i,int n,vector<int>&dp)
    {
        if(i>=n-1)
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        
        return dp[i]=max(nums[i]+solve(nums,i+2,n,dp),solve(nums,i+1,n,dp));
    }
     int solve2(vector<int>&nums,int i,int n,vector<int>&dp)
    {
        if(i>=n)
            return 0;
        if(dp[i]!=-1)
            return dp[i];
          return dp[i]=max(nums[i]+solve2(nums,i+2,n,dp),solve2(nums,i+1,n,dp));
     }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp1(n,-1);
        vector<int>dp2(n,-1);
       if(n==1)return nums[0];
        
        int ans1=solve(nums,0,n,dp1);
        int ans2=solve2(nums,1,n,dp2);
        return max(ans1,ans2);
    }
};