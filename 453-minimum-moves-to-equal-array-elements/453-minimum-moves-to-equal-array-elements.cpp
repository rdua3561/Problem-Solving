class Solution {
public:
    int minMoves(vector<int>& nums) {
        
        int n=nums.size();
        int mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(mini>nums[i])
            {
                mini=nums[i];
            }
        }
        //cout<<mini;
        int sum=0;
        for(int i=0;i<n ;i++)
        {
           
            sum+=nums[i]-mini;
            
        }
        return sum;
    }
};