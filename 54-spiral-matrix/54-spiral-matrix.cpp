class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
      vector<int> ans;
      int start_row=0;
      int end_row=matrix.size()-1;
      int start_column=0;
      int end_column=matrix[0].size()-1;
        
        while(start_row<=end_row and start_column<=end_column)
        {
            for(int col=start_column;col<=end_column;col++)
            {
                ans.push_back(matrix[start_row][col]);
            }
            
            for(int row=start_row+1;row<=end_row;row++)
            {
                ans.push_back(matrix[row][end_column]);
            }
            
            for(int col=end_column-1;col>=start_column;col--)
            {
                if(start_row==end_row)
                    break;
                ans.push_back(matrix[end_row][col]);
            }
            
            
            for(int row=end_row-1;row>=start_row+1;row--)
            {
                if(start_column==end_column)
                    break;
                ans.push_back(matrix[row][start_column]);
            }
            
            start_row++;
            end_row--;
            start_column++;
            end_column--;
        }
        return ans;
    }
};