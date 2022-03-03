class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int i=0;
        for(;i<nums.size();i++)
        {
            if(nums[i]==nums[i+1])
            {
            break;
            }
        }
        return nums[i];
        
    }
};