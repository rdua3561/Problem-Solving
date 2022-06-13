class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
        int n=arr.size();
        
        if(n<=2)
            return false;  //2 size mountain doesn't exist
        
    
        
        int max=INT_MIN;
        int j;
       for(int i=0;i<n;i++)
       {
           if(arr[i]>max)
           {
            max=arr[i];
            j=i;
           }
       }
        if(max==arr[n-1])
        {
            return false;
        }
        
        if(max==arr[0])
            return false;
    
        for(int i=j;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                
            }
                
            else
                return false;
        }
        
        for(int i=j;i>=1;i--)
        {
            if(arr[i]>arr[i-1])
            {
            }
                
            else
               return false;
        }
        
        return true;
           
        
    }
};