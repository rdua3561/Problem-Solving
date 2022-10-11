class Solution {
public:
    int m,n,mod=1e9+7,K;
    int solve(int i,int j,int sum,vector<vector<int>>& grid, vector<vector<vector<int>>>& dp)
    {
        if(i>=m ||j>=n) return 0;
        
        if(i==m-1 and j==n-1) return ((sum+grid[i][j])%K)==0;
        
        if(dp[i][j][sum]!=-1) return dp[i][j][sum];
        
        return dp[i][j][sum]=(solve(i+1,j,(sum+grid[i][j])%K,grid,dp)+solve(i,j+1,(sum+grid[i][j])%K,grid,dp))%mod;
        
        
    }
    
    int numberOfPaths(vector<vector<int>>& grid, int k) {
         m=grid.size();
         n=grid[0].size();
         K=k;
        vector<vector<vector<int>>> dp(m,vector<vector<int>> (n,vector<int>(k,-1)));
         
        
        return solve(0,0,0,grid,dp);
    }
};
