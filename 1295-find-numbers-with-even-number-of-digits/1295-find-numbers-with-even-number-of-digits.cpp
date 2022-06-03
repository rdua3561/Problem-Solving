class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int n=nums.size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            if((int)floor(log10(nums[i])+1)%2==0)
            {
                c++;
            }
        }
        return c;
    }
};
//(int)floor(log10(nums[i]) + 1)%2