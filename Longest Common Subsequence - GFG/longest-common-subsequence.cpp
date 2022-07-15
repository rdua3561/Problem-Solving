// { Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

 // } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int dp[1001][1001];
    int helper(string& string1,string& string2, int n,int m)
    {
        if(n==0 || m==0) return 0;
        
        if(dp[n][m]!=-1) return dp[n][m];
        
        if(string1[n-1]==string2[m-1])
        {
            return dp[n][m]=1+helper(string1,string2,n-1,m-1);
        }
        else
        {
            return dp[n][m]=max(helper(string1,string2,n,m-1),helper(string1,string2,n-1,m));
        }
    }
    int lcs(int x, int y, string s1, string s2)
    {
        // your code here
        memset(dp,-1,sizeof(dp));
        return helper(s1,s2,x,y);
    }
    
};


// { Driver Code Starts.
int main()
{
    int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}
  // } Driver Code Ends