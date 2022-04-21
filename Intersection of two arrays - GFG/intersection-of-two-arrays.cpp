// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++
 #include <bits/stdc++.h>
class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
  

int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
    unordered_set<int> s;
     int c=0;
    for(int i=0;i<m;i++)
    {
        s.insert(b[i]);
    }
    
    for(int i=0;i<n;i++)
    
    {
        int key=a[i];
        if(s.find(key)!=s.end())
        {
            c++;
            s.erase(key);
        }
    }
    
    return c;
}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < m; i++) cin >> b[i];
        Solution ob;
        cout << ob.NumberofElementsInIntersection(a, b, n, m) << endl;
    }
    return 0;
}  // } Driver Code Ends