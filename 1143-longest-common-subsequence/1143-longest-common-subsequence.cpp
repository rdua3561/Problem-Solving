class Solution {
public:
    int dp[1001][1001];
    int helper(string& string1,string& string2, int n,int m)
    {
        if(n==0 || m==0) return 0;
        
        if(dp[n][m]!=-1) return dp[n][m];
        
        if(string1[n-1]==string2[m-1])
        {
            return dp[n][m]=1+helper(string1,string2,n-1,m-1);
        }
        else
        {
            return dp[n][m]=max(helper(string1,string2,n,m-1),helper(string1,string2,n-1,m));
        }
    }
    int longestCommonSubsequence(string text1, string text2) {
        memset(dp,-1,sizeof(dp));
        return helper(text1,text2,text1.length(),text2.length());
    }
};