class Solution {
public:
    //METHOD 1: Using DFS
//     int dx[4]={0,1,-1,0};
//     int dy[4]={-1,0,0,1};
//     void flood_fill(vector<vector<char>>& grid,int x,int y,int n, int m)
//     {
        
//         grid[x][y]='0';
//         for(int i=0;i<4;i++)
//         {
//             int xx=x+dx[i];
//             int yy=y+dy[i];
//             if(xx>=0 and xx<n and yy>=0 and yy<m and grid[xx][yy]=='1')
//             {
//                 flood_fill(grid,xx,yy,n,m);
//             }
//         }
//     }
//     int numIslands(vector<vector<char>>& grid) {
//         int total_count=0;
//         int n=grid.size();
//         int m=grid[0].size();
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<m;j++)
//             {
//                 if(grid[i][j]=='1')
//                 {
//                     total_count++;
//                     flood_fill(grid,i,j,n,m);
//                 }
//             }
//         }
//         return total_count;
//     }
    
    //METHOD 2: Using BFS
    int dx[4]={0,-1,1,0};
    int dy[4]={-1,0,0,1};
    void BFS(int row,int col, vector<vector<char>> &grid, vector<vector<int>> &vis)
    {
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
                int delta_row=row+dx[i];
                int delta_col=col+dy[i];
                
                if(delta_row>=0 and delta_row<n  and delta_col>=0 and delta_col<m and grid[delta_row][delta_col]=='1' and !vis[delta_row][delta_col])
                {
                    q.push({delta_row,delta_col});
                    vis[delta_row][delta_col]=1;
                }
            }
           
        }

    }
     int numIslands(vector<vector<char>>& grid) {
         int n=grid.size();
         int m=grid[0].size();
         vector<vector<int>> vis(n,vector<int>(m,0));
         int c=0;
         for(int row=0;row<n;row++)
         {
             for(int col=0;col<m;col++)
             {
                 if(grid[row][col]=='1' and !vis[row][col])
                 {
                     BFS(row,col,grid,vis);
                     c++;
                 }
             }
         }
         
         return c;
     }
};