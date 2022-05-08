#include<bits/stdc++.h>
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int size1=gain.size();
        int prefix[size1];
        
        for(int i=0;i<size1;i++)
            prefix[i]=0;
        
        prefix[0]=gain[0];
       for(int i=1;i<size1;i++)
        {
            prefix[i]=prefix[i-1]+gain[i];
        }
    int max=INT_MIN;
     for(int i=0;i<size1;i++)
        {
         if(max<prefix[i])
         {
             max=prefix[i];
            }
     }
         for(int i=0;i<size1;i++)
        {
           cout<< prefix[i];
        }
    if(max>0)
    return max;
        
        else
            return 0;
        
    }
};