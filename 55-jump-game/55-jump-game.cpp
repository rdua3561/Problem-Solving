class Solution {   //[3,2,1,0,4]
public:

      //METHOD 2:REC+MEMOISATION
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

    //METHOD 3:BOTTOM UP ....TLE
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
    //METHOD 4: GREEDY APPROACH
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