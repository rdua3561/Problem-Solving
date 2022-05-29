class Solution {
public:
//         //Method 1: Brute Force(O^3)  TLE
//          int maxSubArray(vector<int>& nums) {

//           int n = nums.size();
//          int largest_sum=INT_MIN;
//          for(int i=0;i<n;i++)
//          {
//              for(int j=i;j<n;j++)
//              {
//                  int sum=0;
//                for(int k=i;k<=j;k++)
//                {
//                    sum=sum+nums[k];
                   
//                }
//                  largest_sum=max(sum,largest_sum);
//              }
//          }
//          return largest_sum;
     
//     }
//     //Method 2: Prefix Sum O(N^2)  TLE for Large Number of Inputs
//      int maxSubArray(vector<int>& nums) {
     
//          //Creating Prefix sum array
//          int n=nums.size();
//          int prefix_sum[n+1];
//          prefix_sum[0]=nums[0];
//          for(int i=1;i<n;i++)
//          {
//              prefix_sum[i]=prefix_sum[i-1]+nums[i];
//          }
//          //creating of Prefix sum array just done above
         
//          int largest_sum=INT_MIN;
//          for(int i=0;i<n;i++)
//          {
//              for(int j=i;j<n;j++)
//              {
                
//                  int subarray_sum= i>0 ?(prefix_sum[j]-prefix_sum[i-1]):prefix_sum[j] ; // all subarray sum is generated
//                 largest_sum=max(subarray_sum, largest_sum);     // max of subarray sum goes in to our largest_sum
//              }
//          }
//          return largest_sum;
//     }
    
//     //Method 3: Kadanes Algorithm
//     int maxSubArray(vector<int>& nums) {
        
//         int n = nums.size();
//         int ultra_max=INT_MIN;
//         int sum=0;
        
//         for(int i=0;i<n;i++){
            
//             sum+=nums[i];
//             ultra_max=max(sum,ultra_max);
//             if(sum<0)
//                 sum=0;
      
//       }
//         return ultra_max;
//     }
               
//Method 3: Kadanes Algorithm Modified Version
        int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int max_ending=nums[0];
        int res=nums[0];
        
        for(int i=1;i<n;i++){
            
            //LOGIC= max_ending(i)=max( max_ending(i-1)+nums[i] , nums[i])
            max_ending=max(max_ending+nums[i],nums[i]);
            res=max(max_ending,res);
            
      }
        return res;
    }
        

    
};