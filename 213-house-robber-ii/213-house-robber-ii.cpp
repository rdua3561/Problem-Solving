class Solution {
public:
    
//     int help(vector<int> &nums,int i)
//     {
       
//         if(i>=nums.size())
//         {
//             return 0;
//         }
//      \
//         int include=nums[i]+help(nums,i+2);
//         int exclude=help(nums,i+1);
        
//         return max(include,exclude);
        
//     }
    
//     int rob(vector<int>& nums) {
//         if(nums.size()==1)
//         {
//             return nums[0];
//         }
        
//         //memset(dp,-1,sizeof(dp));
//         vector<int> first_exclude(nums.begin()+1,nums.end());
//         vector<int> last_exclude(nums.begin(),nums.end()-1);
        
//         return max(help(first_exclude,0),help(last_exclude,0));
    // }
    
     int houseRobber(vector<int>& nums) {
        // dynamic programming - decide each problem by its sub-problems:
        int dp[nums.size()+1];
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for (int i=2; i<nums.size(); i++)
            dp[i] = max(dp[i-1], nums[i]+dp[i-2]);
        return dp[nums.size()-1];
    }
    
    int rob(vector<int>& nums) {
        // edge cases:
        if (nums.size() == 0) return 0;
        if (nums.size() == 1) return nums[0];
        if (nums.size() == 2) return max(nums[0], nums[1]);
        
        // either use first house and can't use last or last and not first:
        vector<int> v1(nums.begin(), nums.end()-1);
        vector<int> v2(nums.begin()+1, nums.end());
        return max(houseRobber(v1), houseRobber(v2));
    }
};

