 class Solution {   // [-2 -1 -1 1 1 2 2]
//                       i     j l   h
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
//         int n=nums.size();
//         vector<vector<int>> ans;
       
//         if(n<4)
//             return ans;
//         sort(nums.begin(),nums.end());
        
//         for(int i=0;i<n-3;i++)
//         {
//                 int h=n-1;                   
                
//             for(int j=i+1;j<n-2;j++)
//             {    
//                 int l=j+1;
                
                
//                 while(l<h)
//                 {
                            
//                     vector<int> v;
//                     //cout<<nums[i]<<" "<<nums[j]<<" "<<nums[l]<<" "<<nums[h]<<endl;
//                     if(nums[i]+nums[j]+nums[l]+nums[h]==target)
//                     {
//                         v.push_back(nums[i]);
//                         v.push_back(nums[j]);
//                         v.push_back(nums[l]);
//                         v.push_back(nums[h]);
//                          ans.push_back(v);
//                           l++;
//                           h--;        
                       
                    
//                     }
                    
//                     else if(nums[i]+nums[j]+nums[l]+nums[h]>target)
//                     {
//                         h--;
//                     }
//                     else if(nums[i]+nums[j]+nums[l]+nums[h]<target)
//                     {
//                         l++;
//                     }
                    
                   
//                while(l<h and nums[l]==nums[l+1])
//                 {
//                     l++;
//                 }
//                while(h>l and nums[h]==nums[h-1])
//                 {
//                     h--;
//                 }
                    
//                        //[-2,-1,-1,1,1,2,2]
//                          //0
//                 }
//                 while(j<n-1 and nums[j]==nums[j+1])
//                 {
//                     j++;
//                 }
           
//             }
//              while(i<n-1 and nums[i]==nums[i+1])
//                 {
//                     i++;
//                 }
            
            
//         }
//         return ans;
        
        int n=nums.size();
        vector<vector<int>> ans;
       
        if(n<4)
            return ans;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n-3;i++)
        {
            for(int j=i+1;j<n-2;j++)
            {
                int k=j+1;
                int h=n-1;
                while(k<h)
                {
                    long long curr_sum=nums[i]+nums[j];
                    curr_sum+=nums[k];
                    curr_sum+=nums[h];
                    if(curr_sum==target)
                    {
                        ans.push_back({nums[i],nums[j],nums[k],nums[h]});
                        while(k<h and nums[k]==nums[k+1])
                            k++;
                        while(k<h and nums[h]==nums[h-1])
                            h--;
                        k++;
                        h--;
                    }
                    else if(curr_sum>target)
                    {
                        h--;
                    }
                    else
                        k++;
                }
                while(j<n-2 and nums[j]==nums[j+1])
                    j++;
            
            }
            while(i<n-3 and nums[i]==nums[i+1])
                i++;
        }
        return ans;
    }
};

