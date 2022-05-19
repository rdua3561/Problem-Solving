class Solution {
public:
    //METHOD 1: Sorting
//     int findDuplicate(vector<int>& nums) {
        
//         sort(nums.begin(),nums.end());
//         int i=0;
//         for(;i<nums.size();i++)
//         {
//             if(nums[i]==nums[i+1])
//             {
//             break;
//             }
//         }
//         return nums[i];
        
//     }
    //Method 2: Map
     int findDuplicate(vector<int>& nums) {
        
           unordered_map<int, int> mp;
        for(auto i: nums)
        {
            mp[i]++;
        }
    
        for(auto i: mp)
        {
            if(i.second>=2)
                return i.first;
        }
    
    return -1;
        
    }
};