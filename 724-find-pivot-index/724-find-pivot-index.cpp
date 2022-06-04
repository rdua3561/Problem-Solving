class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int ans,flag=0;
        int n=nums.size();
        vector<int> prefix(n);
        prefix[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            prefix[i]=prefix[i-1]+nums[i];
        }
        
//         for(int i=0;i<n;i++)
//         {
//             if(prefix[i]==(prefix[n-1]-prefix[i+1]))
//             {
            
//                 flag=1;
//                 ans=i+1;
//                 break;
//             }
//         }
        
//         if(flag==0)
//             return -1;
        
//         else
//             return ans;
        for (int i = 0; i < n; i++)
        {
            if (prefix[i] - nums[i] == prefix[nums.size() - 1] - prefix[i])
                return i;
        }
        return -1;
    }
};


     
