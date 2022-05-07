class Solution {
public:
    void sortColors(vector<int>& nums) {
        //DUTCH NATIONAL FLAG
        int n=nums.size();
        
        int l=0,m=0,h=n-1;
        
        while(m<=h)
        {
            if(nums[m]==0)
            {
                swap(nums[m],nums[l]);
                l++;
                m++;
                
            }
                
            else if(nums[m]==1)
            {
                m++;
            }
                
                
            else if(nums[m]==2)
            {
               swap(nums[m],nums[h]);
               h--; 
                
            }
                
        }
        
    }
};