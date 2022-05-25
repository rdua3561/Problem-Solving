class Solution {
public:
    //Method 1: Iteratively
//     int peakIndexInMountainArray(vector<int>& arr) {
//         int maxi=INT_MIN;
//         int n=arr.size();
//         int index=0;
        
//         for(int i=0;i<n-1;i++)
//         {
//             if(arr[i]<arr[i+1]){
//                 maxi=max(maxi,arr[i+1]);
//                 index=i+1;
//             }
                
//         }
        
//         return index;
        
//     }
    
    
    //Method 2:Binary Search
     int peakIndexInMountainArray(vector<int>& arr) {
     int l=0,h=arr.size()-1;
         //int ans;
         while(l<=h)
         {
             int mid=l+(h-l)/2;
             
             if(arr[mid]<arr[mid+1]){
                 l=mid+1;
             }
             
             else
             {
                 h=mid-1;
             }
             
             
         }
         
         return l;
       
        
    }
};