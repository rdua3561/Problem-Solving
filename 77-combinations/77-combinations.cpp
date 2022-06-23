class Solution {
public:
    vector<vector<int>> ans;
    vector<int> v;
    
    void help(int i,int n,int k)
    {
        if(k==0)
        {
            ans.push_back(v);
            return;
        }
        
        if(i>n)
        {
            return;
        }
       
       
        //Pick
            v.push_back(i);
            help(i+1,n,k-1);
            v.pop_back();
        
        //not pick
        help(i+1,n,k);
    }
    vector<vector<int>> combine(int n, int k) {
        
        help(1,n,k);
        return ans;
    }
    
};