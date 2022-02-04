class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int sum,max=0;
        int n=accounts.size();
       
        for(int i=0;i<accounts.size();i++)
        {
            sum=0;
            for(int j=0;j<accounts[i].size();j++)//IMPORTANT 
            {
                
                sum+=accounts[i][j];
            }
            
            if(sum>max)
                max=sum;
            
            
        }
        
        return max;
        
    }
};