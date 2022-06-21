class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_map<int,bool> mp;
        for(auto i: nums)
        {
            mp[i]=true;
        }
        int ans=0;
        for(auto x: nums)
        {
            int c=1;
           if(mp.find(x-1)==mp.end()) //error aa rhi thi bcoz nums mai search kro na ki map mai
           {
               
               while(mp.find(x+1)!=mp.end())
               {
                   x++;
                   c++;
               }
           }
            ans=max(ans,c);
        }
        
        return ans;
    }
};