class Solution {
public:
    //Method 1: used dp as a vector
    
//     int help(int i,int j,int m,int n,vector<vector<int>>& dp)
//     {
//         if(i>=m ||j>=n)  return 0;
//         if(i==m-1 and j==n-1)  return 1;
        
//         if(dp[i][j]!=-1)
//         {
//             return dp[i][j];
//         }
        
        
//         return dp[i][j]=help(i+1,j,m,n,dp) + help(i,j+1,m,n,dp);
        
    
//     }
//     int uniquePaths(int m, int n) {
//         vector<vector<int>> dp(m,vector<int>(n,-1));
//         return help(0,0,m,n,dp);
//     }
    //Method 3: used dp in global and used memset to make -1 all dp
    
    int dp[102][102];
      int help(int i,int j,int m,int n)
    {
        if(i>=m ||j>=n)  return 0;
        if(i==m-1 and j==n-1)  return 1;
        
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        
        
        return dp[i][j]=help(i+1,j,m,n) + help(i,j+1,m,n);
        
    
    }
    int uniquePaths(int m, int n) {
        memset(dp,-1,sizeof(dp));
        return help(0,0,m,n);
    }
};