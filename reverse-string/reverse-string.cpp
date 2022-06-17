class Solution {
public:
     //Method 1: Recursion
//     void reverseString(vector<char>& s) {
//         return helper(s,0);
        
//     }
    
//  void helper(vector<char>&s,int i)
//     {
//           int size=s.size();
    
//         if(i>=size/2)
//         {
//             return;
//         }
        
//         swap(s[i],s[size-i-1]);
        
//       return helper(s,i+1);
//     }
    // Method 2: Loop
     void reverseString(vector<char>& s) {
        int i=0;
         int j=s.size()-1;
        while(i<=j)
        {
            swap(s[i],s[j]);
            i++;
            j--;
        }
         
    }
   
};