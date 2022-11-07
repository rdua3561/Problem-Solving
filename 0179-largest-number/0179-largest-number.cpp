class Solution {
public:
    static bool compare(int ele1, int ele2)
    {
        string a=to_string(ele1);
        string b=to_string(ele2);
        
        if(a+b > b+a)
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