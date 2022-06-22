class Solution {
public:
    vector<vector<int>> ans;
    
    void helper(vector<int> &nums,int pos)
    {
        if(pos==nums.size()-1)
        {
            ans.push_back(nums);
            return;
        }
        
        set<int> s;
        for(int i=pos;i<nums.size();i++)
        {
          //if(i==pos|| nums[i]!=nums[pos])
            if(s.find(nums[i])!=s.end())
                continue;
            s.insert(nums[i]);
            swap(nums[i],nums[pos]);
            helper(nums,pos+1);
          
            swap(nums[i],nums[pos]);
          }
          
            
        }
        
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        int pos=0;
        helper(nums,pos);
        return ans;
    }
};