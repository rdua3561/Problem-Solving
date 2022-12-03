class Solution {
public:
    static bool cmp(pair<char,int> ele1,pair<char,int> ele2)
    {
        if(ele1.second>ele2.second)
            return true;
        
        return false;
    }
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        vector<pair<char,int>> v;
        for(int i=0;i<s.size();i++)
        {
            freq[s[i]]++;
            
        }
       for(auto it:freq) 
       {
           v.push_back(it);
       }
        // for(auto it: v)
        // {
        // cout<<it.first<<" "<<it.second<<endl;
        // }
        
        sort(v.begin(),v.end(),cmp);
        
        // for(auto it: v)
        // {
        // cout<<it.first<<" "<<it.second<<endl;
        // }
        string out="";
        for(auto it:v)
        {
            while(it.second--)
            {
                out+=it.first;
            }
        }
        return out;
    }
};