class Solution {
public:
    int dp[102][102];
    
    int help(vector<vector<int>>& grid,int i,int j)
    {
        int n=grid.size();
        int m=grid[0].size();
        if(i>=n || j>=m) return 0;
        if(grid[i][j]==1) return 0;
        if(i==n-1 and j==m-1) return 1;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        dp[i][j]=help(grid,i+1,j)+help(grid,i,j+1);
        
        return dp[i][j];
        
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        memset(dp,-1,sizeof(dp));
        return help(obstacleGrid,0,0);
    }
};