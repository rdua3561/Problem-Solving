class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
     int i,j;
     int n=matrix.size();
	
    //TRANSPOSE OF A MATRIX
     for(i=0;i<n;i++)
     {
        for( j=0;j<i;j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
     }
   
    //REVERSE EACH ROW OF A MATRIX
//     for(i=0;i<n;i++)
//     {
//         reverse(matrix[i].begin(),matrix[i].end());
//     }

      
//     }
    for(i=0;i<n;i++)
     {
        for( j=0;j<n/2;j++)
        {
            swap(matrix[i][j],matrix[i][n-j-1]);
        }
     
    }
    }
};