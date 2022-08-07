class Solution {
public:
    int dx[4]={0,1,-1,0};
    int dy[4]={-1,0,0,1};
    void flood_fill(vector<vector<char>>& grid,int x,int y,int n, int m)
    {
        
        grid[x][y]='0';
        for(int i=0;i<4;i++)
        {
            int xx=x+dx[i];
            int yy=y+dy[i];
            if(xx>=0 and xx<n and yy>=0 and yy<m and grid[xx][yy]=='1')
            {
                flood_fill(grid,xx,yy,n,m);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int total_count=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1')
                {
                    total_count++;
                    flood_fill(grid,i,j,n,m);
                }
            }
        }
        return total_count;
    }
};