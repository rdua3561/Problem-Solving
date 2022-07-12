class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        
        int i=0;
        int j=m-1;
        while(i>=0 and i<n and j>=0 and j<m)
        {
            if(matrix[i][j]==target)
                return true;
            
            else if(matrix[i][j]<target)
                i++;
            
            else
                j--;
        }
        
        return 0;
        
    }
};