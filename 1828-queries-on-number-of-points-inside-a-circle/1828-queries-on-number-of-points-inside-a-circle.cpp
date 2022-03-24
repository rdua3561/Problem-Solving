class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
    
    vector<int>ans;
    
    for(auto x:queries)
    {
        int  x1=x[0],y1=x[1],r = x[2];
        
        int count=0;
        
        for(auto y:points)
        {
            int x2=y[0],y2=y[1];
            
            int a=pow((x2-x1),2); 
            int b=pow((y2-y1),2);
            
            float d = sqrt(a +b);
            
            if(d<=r) 
                count++;
            
        }
        
        ans.push_back(count);
    }
    
    return ans;
    }
};