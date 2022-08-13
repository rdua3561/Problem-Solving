class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& item1, vector<vector<int>>& item2) {
       map<int,int> mp;
        
        vector<vector<int>> ans;
        
        for(int i=0;i<item1.size();i++)
        {
            //mp[it[0]]=mp[it[0]]+it[1];
            mp[item1[i][0]]=item1[i][1];
        }
        
       for(int i=0;i<item2.size();i++)
        {
            //mp[it[0]]=mp[it[0]]+it[1];
           //if(mp.count(item2[i][0]))
            mp[item2[i][0]]+=item2[i][1];
        }
        
         for(auto it: mp)
        {
            ans.push_back({it.first,it.second});
        }
        return ans;
    }
};