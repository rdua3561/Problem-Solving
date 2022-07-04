class Solution {   //[3,2,1,0,4]
public:
    
//     bool help(int index,vector<int>& nums)
//     {
//        if(index>=nums.size()-1)  return true;
        
        
//         for(int j=1;j<=nums[j];j++)
//         {
//                 help(index+j,nums);
//         }
//         return false;                              
//     }
//     bool canJump(vector<int>& nums) {
        
//       return help(0,nums);
//     }
    
//        bool helper(int inx, vector<int>& nums, vector<int>& dp){
//         if(inx >= nums.size()-1) return true;
        
//         if(dp[inx] != -1) return dp[inx];
//         bool val = false;
//         for(int i=1; i<=nums[inx]; i++){
//             val = val || helper(inx + i, nums, dp);
//         }
//         return dp[inx] = val;
//     }
//     bool canJump(vector<int>& nums) {
//         vector<int> dp(nums.size(), -1);
//         return helper(0, nums, dp);
//     }

//      bool canJump(vector<int>& nums) {
//         vector<int> dp(nums.size(), 0);
//         dp[nums.size()-1] = 1;
        
//         for(int inx = nums.size()-2; inx>=0; inx--){
//             bool val = false;
//             for(int i=1; i<=nums[inx]; i++){
//                if(inx + i < nums.size()) val = val || dp[inx + i];
//             }
//             dp[inx] = val;
//         }
//         return dp[0];
//     }
    
        bool canJump(vector<int>& nums) {
        int n = nums.size(), canReach = n-1;
        for(int curPos = n-1; curPos >= 0; curPos--){
            if(curPos + nums[curPos] >= canReach){
                canReach = min(curPos, canReach);
            }
        }
        return canReach == 0;
    }
};