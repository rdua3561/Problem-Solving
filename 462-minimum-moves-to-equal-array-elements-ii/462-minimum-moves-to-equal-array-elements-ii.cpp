class Solution {
public:
    int minMoves2(vector<int>& nums) {
      
        long long mini=INT_MAX;
        int n=nums.size();
        long long sum=0;
        sort(nums.begin(),nums.end());
        int j;
            j=n/2;
        for(int i=j;i<=j;i++)
        {
            for(int k=0;k<n;k++)
            {
            sum+=abs(nums[i]-nums[k]);
            }
            
            mini=min(mini,sum);
            
        }
        return mini;
    }
};