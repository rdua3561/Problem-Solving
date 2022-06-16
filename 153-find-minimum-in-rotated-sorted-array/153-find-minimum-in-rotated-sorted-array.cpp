class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int ans=nums[0];
        for(int i=1;i<n;i++)
        {
            if(ans>nums[i])
            {
                ans=nums[i];
                return ans;
            }

        }
        return ans;
    }
};