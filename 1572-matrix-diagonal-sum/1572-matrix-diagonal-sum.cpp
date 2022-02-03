class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        int size=mat.size();
        int sum1=0,sum2=0;
        for(int i=0;i<size;i++)
        {
            sum1+=mat[i][i];
            sum2+=mat[i][size-i-1];
        }
        if(size%2==0)
        {
            return sum1+sum2;
        }
        else
        {
            return (sum1+sum2-mat[size/2][size/2]);
        }
        
    }
};