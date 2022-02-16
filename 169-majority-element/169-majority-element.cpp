class Solution {
public:
    int majorityElement(vector<int>& nums) {
//         int q=nums.size();
//         int maxi=0;
//         for(int i=0;i<nums.size();i++)
//         {
//             if(nums[i]>maxi)
//                 maxi=nums[i];
//         }
//         vector<int> c(maxi);
//           for(int i=0;i<nums.size();i++)
//         {
//               c[i]=0;
//           }
//         for(int i=0;i<nums.size();i++)
//         {
//             c[nums[i]]+=1;
//         }
//         int max=c[0];
//          for(int i=1;i<nums.size();i++)
//         {
//              if(c[i]>max)
//                  max=c[i];
//          }
        
//         return max;
        
        map<int,int> counter;
        
        for(auto i: nums)
        {
            if(++counter[i]> nums.size()/2)
                return i;
        }
        
        return 0;
        
    }
};