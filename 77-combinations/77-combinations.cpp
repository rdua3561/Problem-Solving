class Solution {
public:
    //METHOD 1: Using for Loop
vector<vector<int>> ans;
void help(int i,int n,int k,vector<int> &v)
    {
        if(k==0)
        {
            ans.push_back(v);
            return;
        }
        
       
        for(int j=i;j<=n;j++)
        {
            v.push_back(j);
            help(j+1,n,k-1,v);
            v.pop_back();
    
        }
    
      return;
    }

    vector<vector<int>> combine(int n, int k) {
        int i=1;
        vector<int> v;
        help(i,n,k,v);
        return ans;
    }
    
};

//Method 2: without using for loop with 2 base conditions
// vector<vector<int>> ans;
// vector<int> v;
//     void help(int i,int n,int k)
//     {
//         if(k==0)
//         {
//             ans.push_back(v);
//             return;
//         }
//         if(i>n)
//             return;
       
       
       
//         //Pick
//             v.push_back(i);
//             help(i+1,n,k-1);
//             v.pop_back();
        
//         //not pick
//         help(i+1,n,k);
//     }