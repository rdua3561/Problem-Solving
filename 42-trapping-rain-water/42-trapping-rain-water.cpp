class Solution {
public:
    int trap(vector<int>& height) {
        
        int n=height.size();
        if(n<=2)
        {
            return 0;
        }
        
        vector<int> lmax(n,0);
        vector<int> rmax(n,0);
        
        lmax[0]=height[0];
        rmax[n-1]=height[n-1];
        
        for(int i=1;i<n;i++)
        {
            lmax[i]=max(lmax[i-1],height[i]);
            rmax[n-i-1]=max(rmax[n-i],height[n-i-1]);
        }
        
        int water=0;
        for(int i=0;i<n;i++)
        {
            water+=min(lmax[i],rmax[i])-height[i];
            
        }
        
        return water;
          
    }
};