class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         vector<vector<int>> ans;
//         if(nums.size()==0 || nums.size()==1)
//         {
//             return ans;
//         }
//         for(int i=0;i<nums.size()-2;i++)
//         {
            
        
//         int j=i+1;
//         int k=nums.size()-1;
//         int sum=-nums[i];
        
//         while(j<k)
//         {
            
//          if(nums[j]+nums[k]<sum)
//             {
//                 j++;
//             }
//             else if(nums[j]+nums[k]>sum)
//                 k--;
            
//             else if(nums[j]+nums[k]==sum)
//             {
//                 vector<int> v;// this is impt, vector yeahi bnega sirf , upar bnyoge toh element repeat hokr push honge
//                 v.push_back(nums[i]);
//                 v.push_back(nums[j]);
//                 v.push_back(nums[k]);
//                  ans.push_back(v);
//                  while(j<k && nums[j]==nums[j+1])     // skip the duplicate 
//                         j++;
                    
//                     while(j<k && nums[k]==nums[k-1])   // skip the duplicate
//                         k--;
//                 j++;
//                 k--;
//             }
          
           
//         }
            
//             while(i<nums.size()-1 && nums[i+1]==nums[i])     // skip the duplicate 
//                         i++;
          
//         }
        
        
//         return ans;
        
        
       sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        if(nums.size()==0 || nums.size()==1)
        {
            return ans;
        }
        
        for(int i=0;i<=nums.size()-3;i++)
        {
            int j=i+1;
            int k=nums.size()-1;
            
            while(j<k)
            {
                int curr_sum=nums[i];
                curr_sum+=nums[j];
                curr_sum+=nums[k];
                if(curr_sum==0){
                    ans.push_back({nums[i],nums[j],nums[k]});
                   while(j<k and nums[j]==nums[j+1])
                       j++;
                    
                    while(j<k and nums[k]==nums[k-1])
                        k--;
                  j++;
                  k--;
                }
                
                else if(curr_sum>0)
                    k--;
                
                else
                   j++;
            }
            while(i<nums.size()-2 and nums[i]==nums[i+1])
                i++;
        }
           return ans; 
   }
        
        
};

