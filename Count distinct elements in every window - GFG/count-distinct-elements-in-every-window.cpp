// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int nums[], int n, int k)
    {
        unordered_map<int,int> freq;
        int ans=0;
        for(int i=0;i<k;i++)
        {
            freq[nums[i]]++;
            
            if(freq[nums[i]]==1)  // agar kissi element ki freq more than 1 hogi toh nhi krega count ans koa
            {
                ans++;
            }
        }
        vector<int> v;
        v.push_back(ans);
        for(int i=k;i<n;i++)
        {
            freq[nums[i-k]]--;
            if(freq[nums[i-k]]==0)
                ans--;
                
            freq[nums[i]]++;
            if(freq[nums[i]]==1)
            ans++;
            
            v.push_back(ans);
            
        }
        
        return v;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends