class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        //Method 1: TC=O(N)
        // int n=nums.size();
        // for(int i = 0; i < n-1; i++)
        //     if(nums[i] > nums[i+1]) return i;
        // return nums.size() - 1;
        
        //Method 2: TC(logN)
        
       int l=0,h=nums.size()-1;
        
        while(l<h)
        {
            int mid=l+(h-l)/2;
            
            if(nums[mid]>nums[mid+1])
                h=mid;
                
            else
                l=mid+1;
        }
        return l;
    }
        
        
};
