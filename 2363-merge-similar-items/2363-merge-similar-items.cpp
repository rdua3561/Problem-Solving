class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& item1, vector<vector<int>>& item2) {
        map<int,int> mp;
        vector<vector<int>> ans;
        for(auto it: item1)
        {
            mp[it[0]]=mp[it[0]]+it[1];
        }
        
         for(auto it: item2)
        {
            mp[it[0]]=mp[it[0]]+it[1];
        }
        
         for(auto it: mp)
        {
            ans.push_back({it.first,it.second});
        }
        return ans;
    }
};