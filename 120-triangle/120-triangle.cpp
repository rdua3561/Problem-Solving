class Solution {
public:
    int help(int i,int j,vector<vector<int>>& triangle,vector<vector<int>>& memo)
    {
        int n=triangle.size();
        int m=triangle[0].size();
        
        if(i==n-1) return triangle[i][j];
        if(memo[i][j]!=-1) return memo[i][j];
        
        int down=triangle[i][j]+help(i+1,j,triangle,memo);
        int down_right=triangle[i][j]+help(i+1,j+1,triangle,memo);
        
        return memo[i][j]=min(down,down_right);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        //int m=triangle[0].size();
        vector<vector<int>> memo(n,vector<int> (n,-1));
        return help(0,0,triangle,memo);
    }
};

