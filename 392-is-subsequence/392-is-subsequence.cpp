class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.length(),m=t.length();
        int j = 0; 
  
    for (int i = 0; i < m and j < n; i++){
        if (s[j] == t[i])
            j++;
 
    }
    // If all characters of s were found in t
    if (j == n)
        return 1;
        
    else
        return 0;
        
    }
};