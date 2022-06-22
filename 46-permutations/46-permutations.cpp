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
        
        for(int i=pos;i<nums.size();i++)
        {
            swap(nums[i],nums[pos]);
            helper(nums,pos+1);
            swap(nums[i],nums[pos]);
        }
        return;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        int pos=0;
        helper(nums,pos);
        return ans;
    }
};