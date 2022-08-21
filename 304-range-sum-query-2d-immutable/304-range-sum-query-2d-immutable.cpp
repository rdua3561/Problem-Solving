class NumMatrix {
public:
//     vector<vector<int>> prefix;
//     NumMatrix(vector<vector<int>>& matrix) {
//         int n=matrix.size();
//         int m=matrix[0].size();
//         //int m = n>0 ? matrix[0].size() : 0;
//         prefix.resize(n+1,vector<int> (m+1,0));
       
        
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<m;j++)
//             {
//                 prefix[i][j]=matrix[i][j];
//                 if(i-1>=0) prefix[i][j]+=prefix[i-1][j];
                
//                 if(j-1>=0) prefix[i][j]+=prefix[i][j-1];
                
//                 if(i-1>=0 and j-1>=0) prefix[i][j]-=prefix[i-1][j-1];
//             }
//         }
        
//          for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<m;j++)
//             {
//                 cout<<prefix[i][j]<<" ";
//             }
//              cout<<endl;
//          }
        
//     }
    
//     int sumRegion(int row1, int col1, int row2, int col2) {
        
//        //if(row1>0 and col1>0 and row2>0 and col2>0 )
//         return prefix[row2][col2]-prefix[row1-1][col2]-prefix[row2][col1-1]+prefix[row1-1][col1-1];
      
//     }
    
      vector<vector<int>> sum;
    NumMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        sum = vector<vector<int>>(m + 1, vector<int>(n + 1)); // sum[i][j] is sum of all elements inside the rectangle [0,0,i,j]
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + matrix[i - 1][j - 1];
            }
        }
    }
    int sumRegion(int r1, int c1, int r2, int c2) {
        r1++; c1++; r2++; c2++; // Since our `sum` starts by 1 so we need to increase r1, c1, r2, c2 by 1
        return sum[r2][c2] - sum[r2][c1 - 1] - sum[r1 - 1][c2] + sum[r1 - 1][c1 - 1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */