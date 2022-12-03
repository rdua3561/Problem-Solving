class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            vector<bool> vis(256);
            for(int j=i;j<n;j++)
            {
                if(vis[s[j]]==true)
                {
                    break;
                }
                
                else
                {
                    
                    res=max(res,j-i+1);
                    vis[s[j]]=1;
                }
            }
        }
        return res;
        
//         int ans=0;
//         int n=s.size();
//         //unordered_map<char,int> mp;
       
//         for(int i=0;i<n;i++)
//         {
//             int res=0;
//             for(int j=i;j<n;j++)
//             {
//                 if(s[i]!=s[j])
//                 {
//                     res++;
                    
//                 }
//                 else
//                 {
//                     break;
//                 }
//             }
//             ans=max(ans,res);
//         }
//         return ans;
        
    }
};