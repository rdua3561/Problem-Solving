#include<bits/stdc++.h>
#include<string.h>
class Solution {
public:
    string addBinary(string a, string b) {
        
//         long long a1=stoi(a);
//         long long a2=stoi(b);
        
//         long long sum1=0;
//         long long sum2=0;
//         long long i=0;
//         long long j=0;
        
//         if(a1==0 && a2==0)
//             return "0";
        
//         else if(a1==0 && a2==1)
//             return "1";
//         else if(a1==1 && a2==0)
//             return "1";
        
        
//         while(a1!=0)
//         {
//             long long p=a1%10;
//             sum1=sum1+(pow(2,i)*p);
//             a1=a1/10;
//             i++;
//         }
//         while(a2!=0)
//         {
//             long long q=a2%10;
//             sum2=sum2+(pow(2,j)*q);
//             a2=a2/10;
//             j++;
//         }
        
        
//         long long sum=sum1+sum2;
//         string z="";
//         while(sum!=0)
//         {
          
//          z=z+to_string(sum%2);
            
//             sum=sum/2;
            
//         }
        
//       reverse(z.begin(),z.end());
//         return z;
        
         int i = a.length()-1;
        int j = b.length()-1;
        string ans;
        int carry = 0;
        
        while(i>=0 || j>=0 || carry){
            if(i>=0){
                carry += a[i] - '0';
                i--;
            }
            if(j>=0){
                carry += b[j] - '0';
                j--;
            }
            
            ans += (carry%2 + '0');
            carry = carry/2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};