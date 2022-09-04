class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        
        vector<vector<int>> vis(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({{i,j},0});
                    vis[i][j]=2;
                }
            }
        }
        
        int t=0;
        int dx[4]={0,-1,1,0};
        int dy[4]={-1,0,0,1};
        while(!q.empty())
        {
            int row=q.front().first.first;
            int col=q.front().first.second;
            int tq=q.front().second;
             t=max(tq,t);
            q.pop();
            for(int i=0;i<4;i++)
            {
                int del_row=row+dx[i];
                int del_col=col+dy[i];
                
                if(del_row>=0 and del_row<n and del_col>=0 and del_col<m and grid[del_row][del_col]==1 and vis[del_row][del_col]!=2)
                {
                     q.push({{del_row,del_col},tq+1});
                    vis[del_row][del_col]=2;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vis[i][j]!=2 and grid[i][j]==1)
                {
                    return -1;
                }
            }
        }
      
        
        return t;
    }
};