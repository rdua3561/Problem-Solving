class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int closest_sum=nums[0]+nums[1]+nums[n-1];
        for(int i=0;i<nums.size()-2;i++)
        {
            int start=i+1;
            int end=n-1;
            
            while(start<end)
            {
                int current_sum=nums[i]+nums[start]+nums[end];
                
                if(current_sum<target)
                {
                    start++;
                }
                else
                {
                    end--;
                }
                
                if(abs(current_sum-target)<abs(closest_sum-target))
                {
                    closest_sum=current_sum;
                }
            }
        }
        return closest_sum;
    }
};