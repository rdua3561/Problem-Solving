class Solution {
public:
        //Method 1: Brute Force(O^3)  TLE
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
    
    
    //Method 1: Kadanes Algorithm
//     int maxSubArray(vector<int>& nums) {
//         
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
        int ultra_max=nums[0];
        int res=nums[0];
        
        for(int i=1;i<n;i++){
            
            
            ultra_max=max(ultra_max+nums[i],nums[i]);
            res=max(ultra_max,res);
            
      }
        return res;
    }
        

    
};