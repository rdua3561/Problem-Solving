class Solution {
    
    public:

    vector<vector<int>> ch;
   void sun(vector<int>& nums, int i, vector<int>& ofs)
    {
        if(nums.size()==i)
        {
            ch.push_back(ofs);
            return;
        }
        
        ofs.push_back(nums[i]);
       sun(nums,i+1,ofs);
        ofs.pop_back();
        
         sun(nums,i+1,ofs);
        
        
        
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        
    
        vector<int> ofs;
        int i=0;
         sun(nums,i,ofs);
        return ch;
        
    }
};