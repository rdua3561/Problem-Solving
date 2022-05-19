class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i: nums)
        {
            mp[i]++;
        }
        vector<int> arr;
        int k=0;
        for(auto j: mp)
        {
            if(j.second==1)
            {
                arr.push_back(j.first);
            
            }
        }
        return arr;
    }
};