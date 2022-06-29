class Solution {
public:
    int help(vector<int>& nums,vector<int>& dp,int n)
    {
//         if(n==0)
//         {
//             return dp[0]=nums[0];
//         }
        
//         if(n==1)
//         {
//             return dp[1]=max(dp[0],dp[1]);
//         }
    if(n<=-1) return 0;
    
        
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        // int include=nums[n]+help(nums,dp,n-2);
        // int exclude=help(nums,dp,n-1);
        // return max(include,exclude);
        return dp[n]=max(nums[n]+help(nums,dp,n-2),help(nums,dp,n-1));
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        
        help(nums,dp,n-1);
        return dp[n - 1];
    }
};