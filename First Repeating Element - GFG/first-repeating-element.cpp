// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template in C++
#include<bits/stdc++.h>
class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        // code here
           unordered_map<int,int> m;
    // int mini=n;
    // for(int i=0;i<n;i++)
    // {
    //     if(m.find(arr[i])==m.end())
    //     {
    //         m.insert(make_pair(arr[i],i+1));
    //         //m[arr[i]]=i+1;
    //     }
        
    //     else
    //     {
          
    //       if(m[arr[i]]<mini)
    //         mini=m[arr[i]];
    //     }
    // }  
    
    // return mini;
    
     for(int i=0;i<n;i++)
       {
           m[arr[i]]++;
       }
       
        for(int i=0;i<n;i++)
        {
            int key=arr[i];
            auto temp=m.find(key);
            if(temp->second>1)
            {
                return i+1;
            }
        }
        return -1;
    
    }
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; ++i) cin >> arr[i];
        Solution ob;
        cout << ob.firstRepeated(arr, n) << "\n";
    }

    return 0;
}
  // } Driver Code Ends