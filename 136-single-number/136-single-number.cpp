
class Solution {
public:
    // int singleNumber(vector<int>& nums) {
        // METHOD 1 (Using XOR)
//         int ans=0;
        
//         for(int i=0;i<nums.size();i++)
//         {
//             ans=ans^nums[i];
//         }
        
//         return ans;    
        
//     }
    
    //Method 2
//     int singleNumber(vector<int>& nums) { 
//        sort(nums.begin() ,nums.end());
        
//         for(int i=1; i<nums.size(); i+=2){ //i+=2 as we want to check every other element
//             if(nums[i]!=nums[i-1])
//                 return nums[i-1];
//         }
//         return nums[nums.size()-1]; //if we didnot find answer in the loop, so return the last element.
//     }
int singleNumber(vector<int>& nums) { 
      //Method 3:Hashing(through unordered map)
    unordered_map<int, int> mp;
        for(auto i: nums)
        {
            mp[i]++;
        }
    
        for(auto i: mp)
        {
            if(i.second==1)
                return i.first;
        }
    
    return -1;
        

   }
};