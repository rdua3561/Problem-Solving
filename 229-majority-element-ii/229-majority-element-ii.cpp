class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> v;
        unordered_map<int,int> mp;
        
        for(auto i: nums)
        {
            mp[i]++;
        }
        
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            if(i->second>n/3)
                v.push_back(i->first);
        }
        
        return v;
        
    }
};