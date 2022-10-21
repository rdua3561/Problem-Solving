class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        vector<int> ok;
        for(int i=0;i<nums.size();i++)
            ok.push_back(nums[i]);
        
        for(int i=0;i<nums.size();i++)
        {
            int x=nums[i];
            int n=0;
            while(x)
            {
                int rem=x%10;
                 n=n*10+rem;
                
                    x=x/10;
            }
            ok.push_back(n);
        }
        unordered_set<int> s;
        for(int i=0;i<ok.size();i++)
        {
            s.insert({ok[i]});
        }
        return s.size();
    }
};