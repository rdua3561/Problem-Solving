class Solution {
public:
    
    int solve(int a, int b)
    {
        if(a==0)
            return b;
        
        if(b==0)
            return a;
        
        while(a!=b)
        {
        if(a>b)
        {
           a=a-b; 
        }
        
        else
            b=b-a;
        }
        
        return a;
    }
    
    int findGCD(vector<int>& nums) {
        
        int maxi=*max_element(nums.begin(),nums.end());
        int mini=*min_element(nums.begin(),nums.end());
        
        return solve(mini,maxi);
    }
};