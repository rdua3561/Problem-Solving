class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        //PREFIX SUM
        int n=nums.size();
        //vector <int> sol;
        int p=0;
        for(int i=1;i<n;i++)
        {
           nums[i]+=nums[i-1];
            
        }
        
        return nums;
        
    }
};