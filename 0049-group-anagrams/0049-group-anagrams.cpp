class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> anagram;
        unordered_map<string,vector<string>> mp;
        for(auto it: strs)
        {
            string t=it;
            sort(t.begin(),t.end());
            mp[t].push_back(it);
            
        }
        
        for (auto ok : mp) 
        { 
            anagram.push_back(ok.second);
        }
        
        return anagram;
    }
};
      