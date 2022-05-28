class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //Kadanes Algorithm
        int n = nums.size();
        int ultra_max=INT_MIN;
        int sum=0;
        
        for(int i=0;i<n;i++){
            
            sum+=nums[i];
            ultra_max=max(sum,ultra_max);
            if(sum<0)
                sum=0;
            
            
      
      }
        return ultra_max;
    }
        
    
};