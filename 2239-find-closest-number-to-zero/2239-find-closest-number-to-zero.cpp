class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        
   int n=nums.size();
        int res=INT_MAX;
        for(int i=0;i<n;i++)
        {
            
                res=min(res,abs(nums[i]));
        }
        auto t = find(nums.begin(), nums.end(), res);
    
    if( t != nums.end() )
        return res;
    
    
    return -res;
        
    }
};