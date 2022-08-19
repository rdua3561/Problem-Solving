class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> rd;
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        //if(n==0) return rd;
        for(int i=0;i<n;i++)
        {
            if(rd.empty())
            {
                rd.push_back(intervals[i]);
            }
            else
            {
                vector<int> &v=rd.back();
                int xx=v[1];
                
                if(intervals[i][0]<=xx)
                {
                    v[1]=max(xx,intervals[i][1]);
                }
                else
                {
                    rd.push_back(intervals[i]);
                }
            }
        }
        return rd;
        
    }
};