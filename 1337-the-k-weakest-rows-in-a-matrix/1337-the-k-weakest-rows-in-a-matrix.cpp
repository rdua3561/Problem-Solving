class Solution {
public:
   static bool cmp(pair<int,int> & ele1,pair<int,int> & ele2)
    {
        if(ele1.first<ele2.first)
        {
            return true;
        }
        if(ele1.first==ele2.first)
        {
            if(ele1.second<ele2.second)
            {
                return true;
            }
        }
        
        return false;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        vector<pair<int,int>> v;
        for(int i=0;i<mat.size();i++)
        {
            int c=0;
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==1)
                {
                    c++;
                }
            }
            v.push_back({c,i});
        }
        
        sort(v.begin(),v.end(), cmp);
        vector<int> res;
        
        for(auto it: v)
        {
            if(k>0)
                res.push_back(it.second);
            
            --k;
            
        }
        // vector<int> ans;
        // for(int i=0;i<res.size()-1;i++)
        // {
        //     ans.push_back(res[i]);
        // }
        // return ans;
        return res;
    }
};