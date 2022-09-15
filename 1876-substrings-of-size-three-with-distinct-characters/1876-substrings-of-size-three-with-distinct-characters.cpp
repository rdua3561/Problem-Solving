class Solution {
public:
    int countGoodSubstrings(string s) {
        unordered_map<char,int> mp;
        int i=0;
        int j=0;
        int cnt=0;
        while(j<s.size())
        {
            mp[s[j]]++;
           
            if(j-i+1<3)
            {
                j++;
                
            }
            
            else if(mp.size()==3)
            {
                cnt++;
                
                mp.erase(s[i]);
                i++;
                j++;
            
            }
            
            else
            {
                mp[s[i]]--;
                if(mp[s[i]]==0)
                {
                    mp.erase(s[i]);
                }
               i++;
               j++;
            }
        }
        return cnt;
    }
};