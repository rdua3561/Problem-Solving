class Solution {
public:
   int ans=0;
    int help(int i, int j,vector<vector<int>>& grid,vector<vector<int>>& dp)
    {
        int n=grid.size();
        int m=grid[0].size();
        //if(i>=n || j>=m) return 0;
        if(dp[i][j]!=-1)  return dp[i][j];
        if(i==n-1 and j==m-1)
        {
            return grid[i][j];
        }
        int down=INT_MAX,right=INT_MAX;// watch out
        if(i+1<n)
         down=grid[i][j]+help(i+1,j,grid,dp);
        
        if(j+1<m)
         right=grid[i][j]+help(i,j+1,grid,dp);
        
        return dp[i][j]=min(down,right);
        
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>> dp(grid.size(),vector<int>(grid[0].size(),-1));
        return help(0,0,grid,dp);
    }
};