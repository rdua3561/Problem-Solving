class Solution {
public:
    //METHOD 1: USING BFS
    int dx[4]={0,-1,1,0};
    int dy[4]={-1,0,0,1};
    int BFS(int row, int col,vector<vector<int>>& grid, vector<vector<int>>& vis)
    {
        int c=1;
        vis[row][col]=1;
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>> q;
        q.push({row,col});
        
        while(!q.empty())
        {
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            for(int i=0;i<4;i++)
            {
                int del_row=row+dx[i];
                int del_col=col+dy[i];
                
                if(del_row>=0 and del_row<n and del_col>=0 and del_col<m and grid[del_row][del_col]==1 and !vis[del_row][del_col])
                {
                    c++;
                    q.push({del_row,del_col});
                    vis[del_row][del_col]=1;
                   
                }
                
            }
            
        }
        return c;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        vector<int> v;
        
        for(int row=0;row<n;row++)
        {
            int cnt=0;
            
            for(int col=0;col<m;col++)
            {
                if(grid[row][col]==1 and !vis[row][col])
                {
                    
                    
                    int x=BFS(row,col,grid,vis);
                    v.push_back(x);
                }
                
            }  //manjusha
                
                
                //ahsujnam
        }
        int maxi=0;
    
        for(auto i: v)
        {
            maxi=max(i,maxi);
        }
        
        return maxi;
    }
};