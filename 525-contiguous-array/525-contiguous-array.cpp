class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        //METHOD 1: BRUTE FORCE(TC=O^2).....TLE
//         int n=nums.size();
//         int count_zero=0,count_one=0;
        
//         int res=0;
//         for(int i=0;i<n;i++) 
//         {
            
//             for(int j=i;j<n;j++)
//             {
//                 if(nums[j]==0)
//                     count_zero++;
                
//                 else
//                     count_one++;
                
                
//                 if(count_zero==count_one)
//                 {
//                     int maxi=count_zero+count_one;
//                     res=max(res,maxi);
//                 }
                
//             }
//             count_zero=0;
//             count_one=0;
//         }
//         return res;
        
        //Method 2:Unordered_map(TC=O^1)
        int n=nums.size();
        unordered_map<int,int> mp;
        int sum=0;
        mp.insert({0,-1});
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                nums[i]=-1;
            }
        }
        
        int res=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
            auto it=mp.find(sum);
            if(it==mp.end())
            {
                mp[sum]=i;
            }
            else
            {
                res=max(res,i-it->second);
            }
            
        }
        return res;
        
    }
};