class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //METHOD 1: Brute Force (TLE)
//         int n=nums.size();
//         int c=0;
//         for(int i=0;i<n;i++)
//         {
//             int sum=0;
//             for(int j=i;j<n;j++)
//             {
//                 sum+=nums[j];
//                 if(sum==k)
//                     c++;
                
//             }

//         }
//         return c;
        unordered_map<int,int> mp;
        int sum=0,c=0;
        int n=nums.size();
        mp.insert({sum,1});
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            if(mp.find(sum-k)!=mp.end())
            {
                c+=mp[sum-k];
            }
            mp[sum]++;
        }
        return c;
    }
};