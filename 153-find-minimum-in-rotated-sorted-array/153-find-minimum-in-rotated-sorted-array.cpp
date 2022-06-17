class Solution {
public:
    int findMin(vector<int>& nums) {
//         int n=nums.size();
//         int ans=nums[0];
//         for(int i=1;i<n;i++)
//         {
//             if(ans>nums[i])
//             {
//                 ans=nums[i];
//                 return ans;
//             }

//         }
//         return ans;
        
          int lo =0, hi = nums.size()-1;
        while(lo<hi){
              int mid=(lo+hi)/2;
              if(nums[mid]>nums[hi]) lo=mid+1;
              else hi=mid;
        }
        return nums[lo];
    }
};

      