class Solution {
public:
    int longestMountain(vector<int>& arr) {
        
        int n=arr.size();
        int largest=0;
        
        for(int i=1;i<=n-2;)
        {
            if(arr[i]>arr[i-1] and arr[i]>arr[i+1])
            {
               int j=i;
               int c=1;
                
                while(j>=1 && arr[j]>arr[j-1])
                {
                    j--;
                    c++;
                }
                
                while(i<=n-2 && arr[i]>arr[i+1])
                {
                    i++;
                    c++;
                }
                largest=max(largest,c);
            }
            
            
            else
            {
                i++;
            }
        }
        
        return largest;
        
    }
};