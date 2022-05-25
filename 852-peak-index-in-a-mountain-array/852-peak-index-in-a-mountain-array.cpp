class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int maxi=INT_MIN;
        int n=arr.size();
        int index=0;
        
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]<arr[i+1]){
                maxi=max(maxi,arr[i+1]);
                index=i+1;
            }
                
        }
        
        return index;
        
    }
};