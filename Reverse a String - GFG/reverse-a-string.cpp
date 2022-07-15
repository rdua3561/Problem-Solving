// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
#include<bits/stdc++.h>
class Solution {
  public:
    string revStr(string S) {
       int len=S.length(); 
       //[G e e k s]
       int n=len-1;
       for(int i=0;i<len/2;i++)
       {
           swap(S[i],S[n]);
           n=n-1;
       }
       return S;
       
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.revStr(S) << endl;
    }
    return 0;
}
  // } Driver Code Ends