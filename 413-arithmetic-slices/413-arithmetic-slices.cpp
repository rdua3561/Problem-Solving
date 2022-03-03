class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if( nums.size()<3)
            return 0;
        
        int c=0;
        int total=0;
        for(int i=2;i<nums.size();i++){
            
            if(nums[i]-nums[i-1]==nums[i-1]-nums[i-2])
            {
                c++;
                total=total+c;
            }
            
            else
            {
                c=0;
                
            }

            }
        return total;
    }
};