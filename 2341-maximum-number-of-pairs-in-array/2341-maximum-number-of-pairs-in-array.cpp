class Solution {
public:
      vector<int> numberOfPairs(vector<int>& nums) 
    {
        unordered_map<int,int> mp;
            for(auto i: nums)
            {
                mp[i]++;
            }
        
        vector<int> v;
        int c=0,p=0;
        for(auto it: mp)
        {
            if(it.second%2==0)
            {
                c+=it.second/2;
            }
            else
            {
                p++;
                c+=(it.second-1)/2;
            }
        }
        return {c,p};  
    }
   
};