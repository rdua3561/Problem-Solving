class Solution {
public:
    static bool compare(int ele1, int ele2)
    {
        if(to_string(ele1)+to_string(ele2)>to_string(ele2)+to_string(ele1))
            return 1;
        else
            return 0;
    }
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),compare);
        
        string ans="";
        for(auto &it:nums)
        {
            ans+=to_string(it);
        }
        if(nums[0]==0) return "0";
        return ans;
    }
};