class Solution {
public:
    int mySqrt(int x) {
        int l=0,h=x;
        int ans=-1;
        if(x==0)
            return 0;
        
        while(l<=h)
        {
        int mid=l+(h-l)/2;
            
            if(mid==0)
                return 1;
            if(mid==x/mid)
                return mid;
            
            else if(mid<x/mid){
                l=mid+1;
                ans=mid;
            }
            
            else
                h=mid-1;
            
        }
        
     return ans;
        
        
    }
};