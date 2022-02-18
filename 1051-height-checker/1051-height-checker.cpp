class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
        vector<int> temp=heights;
        sort(temp.begin(),temp.end());
        int n=temp.size();
        int ans=0;
        for(int i=0;i<n;++i) {
            if(temp[i]!=heights[i]) ++ans;
        }
        return ans;
        
    }
};