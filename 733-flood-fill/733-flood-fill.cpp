class Solution {
public:
    int dx[4]={0,-1,1,0};
    int dy[4]={-1,0,0,1};
    
    void DFS(vector<vector<int>>& image,vector<vector<int>>& ans,int sr,int sc,int iniColor,int newColor)
    {
        int n=image.size();
        int m=image[0].size();
        ans[sr][sc]=newColor;
        for(int i=0;i<4;i++)
        {
            int row=sr+dx[i];
            int col=sc+dy[i];
            
            if(row>=0 && row<n && col>=0 && col<m && image[row][col]==iniColor && ans[row][col]!=newColor )
            {
                DFS(image,ans,row,col,iniColor,newColor);
            }
        }

    
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        vector<vector<int>> ans=image;
        int n=image.size();
        int m=image[0].size();
        int iniColor=image[sr][sc];
        DFS(image,ans,sr,sc,iniColor,newColor);
        
        return ans;
    }
};