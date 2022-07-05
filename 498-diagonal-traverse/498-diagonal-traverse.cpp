class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        
        map<int,vector<int>> mp;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                mp[i+j].push_back(mat[i][j]);
            }
        }
        vector<int> ans;
        
        for(auto it: mp)
        {
            if((it.first)%2==0)
            {
                reverse(it.second.begin(),it.second.end());
            }
            
            for(auto k: it.second)
            {
                ans.push_back(k);
            }
        }
        return ans;
    }
};