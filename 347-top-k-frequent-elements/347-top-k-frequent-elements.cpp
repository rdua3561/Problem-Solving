class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>> > minh;
        vector<int> v;
        for(auto i: nums)
        {
            mp[i]++;
        }
        
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            minh.push({i->second,i->first});
            
            if(minh.size()>k)
            {
                minh.pop();
            }
        }
        
        while(minh.size()>0)
        {
            v.push_back(minh.top().second);
            minh.pop();
        }
        return v;
    }
};
