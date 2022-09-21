class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int> mp;
        vector<int> ans;
        for(int i=0;i<p.size();i++)
        {
            mp[p[i]]++;
        }
        
        int count=mp.size();
        int k=p.size();
        int i=0,j=0;
        while(j<s.size())
        {
            auto it=mp.find(s[j]);
            if(it!=mp.end())
            {
                mp[s[j]]--;
                if(mp[s[j]]==0)
                {
                    count--;
                }
            }
            
            if(j-i+1<k)
            {
                j++;
            }
            
            else if(j-i+1==k)
            {
                if(count==0)
                {
                    ans.push_back(i);
                }
                
                
            auto it=mp.find(s[i]);
            if(it!=mp.end())
            {
                mp[s[i]]++;
                if(mp[s[i]]==1)
                {
                    count++;
                }
            }
                i++;
                j++;
            

        }
        }
        return ans;
    }
};