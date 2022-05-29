class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        
        
        int n=nums.size();
            
            for(int i=0;i<n;i++)
            {
                int left_sum=0;
                for(int j=0;j<i;j++)
                {
                    left_sum+=nums[j];
                }
                
                int right_sum=0;
                for(int k=i+1;k<n;k++)
                {
                    right_sum+=nums[k];
                }
                
                if(right_sum==left_sum)
                {
                    return i;
                }
            }
        
        return -1;
        
    }
};