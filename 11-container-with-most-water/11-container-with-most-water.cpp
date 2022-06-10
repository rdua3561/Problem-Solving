class Solution {
public:
    int maxArea(vector<int>& height) {

//         int max=INT_MIN;
//         int n=height.size();
//         for(int i=0;i<n;i++)
//         {
            
//             for(int j=i;j<n;j++)
//             {
//                 int ht=min(height[i],height[j]);
//                 int w=j-i;
                
//                 int ans=ht*w;
                
//              if(ans>max)
//                 max=ans;
//             }

//         }
//         return max;
        
        
        //Method 2
          int max=INT_MIN;
        int n=height.size();
        int i,j;
        for(i=0,j=n-1;i<j;)
        {
            int ans=(j-i)*min(height[i],height[j]);
            
            if(ans>max)
                max=ans;
            
            if(height[i]>height[j])
            {
                j--;
            }
            else
                i++;
            
        }
        return max;
        
    }
};