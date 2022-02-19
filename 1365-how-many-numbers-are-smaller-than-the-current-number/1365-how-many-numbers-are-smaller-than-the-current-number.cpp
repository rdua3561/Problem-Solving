class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        vector<int> nums2;
        for(int i=0;i<nums.size();i++)
        {
            int c=0;
            for(int j=0;j<nums.size();j++)
            {
                if(nums[i]>nums[j])
                {
                    c++;
                }
                
            }
            nums2.push_back(c);
        }
        
        return nums2;
        
    }
};