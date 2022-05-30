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
        
        
        //METHOD 2: MAP
        map<int,int> counter;
        
        for(auto i: nums)
        {
            if(++counter[i]> nums.size()/2)
                return i;
        }
        
        return 0;
        
        //METHOD 3: BRUTE FORCE O(N^2)
//         int n=nums.size();
//         vector<int> v;
//         for(int i=0;i<n;i++)
//         {
//             int count=1;
//             for(int j=i+1;j<n;j++)
//             {
//                 if(nums[i]==nums[j])
//                     count++;
//             }
            
//             if(count>n/2)
//             {
//                 return nums[i];
//             }
//         }
//         return -1;
        
    }
};