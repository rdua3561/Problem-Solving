class Solution {
public:
    int solve(int check,vector<int>nums,int n)
    {
        int c=0;
    
        for(int i=0;i<n;i++)
        {
            if(nums[i]>=check)
                c++;
        }
        return c;
    }
    int specialArray(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<=100;i++){
            
              if(solve(i,nums,n)==i)
                  return i;
            }
            
            return -1;
        
    }
};