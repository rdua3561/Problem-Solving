// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string s)
    {
   
        unordered_map<char,int> mp;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(mp.find(s[i])!=mp.end())
            {
                if(mp[s[i]]==1)
               return s[i]; 
            }
        }
        return '$';
    
       
    }

};

// { Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}
  // } Driver Code Ends