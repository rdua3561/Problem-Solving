class Solution {
public:
    //Method1: Brute Force Using Sets
    int findKthPositive(vector<int>& arr, int k) {
        
        set<int> s;
        int n=arr.size();
        int i;
        for( i=0;i<n;i++)
        {
            s.insert(arr[i]);
        }
        
         for( i=1;i<=1000000;i++)
        {
             if(s.find(i)==s.end())
             {
                 k--;
                 
                 if(k==0)
                 {
                     break;
                 }
                
             }
            
        }
          return i;

    }
};