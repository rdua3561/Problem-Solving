class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        
        sort(intervals.begin(),intervals.end());
        
        int n=intervals.size();
        
        for(int i=0;i<n;i++)
        {
            if(ans.empty())
            {
                ans.push_back(intervals[i]);
            }
            
            else
            {
                vector<int> &v=ans.back();
                int xx=v[1];
                if(intervals[i][0]<=xx)
                {
                    v[0]=min(intervals[i][0],v[0]);
                    v[1]=max(intervals[i][1],xx);
                }
                else
                {
                    ans.push_back(intervals[i]);
                }
            }
        }
        return ans;
        
    }
};