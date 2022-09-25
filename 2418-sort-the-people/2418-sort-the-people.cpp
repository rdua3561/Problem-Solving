class Solution {
public:
    static bool comp(pair<string,int>&ele1, pair<string,int> &ele2)
    {
        if(ele1.second>ele2.second)
            return true;
        else
            return false;
    }
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> ans;
        vector<pair<string,int>> a;
        
        for(int i=0;i<heights.size();i++)
        {
            a.push_back({names[i],heights[i]});
        }
        
        sort(a.begin(),a.end(),comp);
        
        for(int i=0;i<names.size();i++)
        {
            ans.push_back(a[i].first);
        }
        
        return ans;
    }
};