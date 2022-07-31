class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        int l1=s.length();
        int l2=t.length();
        if(l1!=l2)
            return false;
        
        for(int i=0;i<l1;i++)
        {
            mp[s[i]]++;
        }
        
          for(int i=0;i<l2;i++)
        {
            mp[t[i]]--;
        }
        for(auto it: mp)
        {
            if(it.second!=0)
                return false;
        }
        return true;
        
    }
};