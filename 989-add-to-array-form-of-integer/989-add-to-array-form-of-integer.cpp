class Solution {
public:
    vector<int> addToArrayForm(vector<int>& nums, int k) {
        reverse(nums.begin(),nums.end());
        vector<int> v,ans;
        while(k!=0)
        {
            v.push_back(k%10);
            k=k/10;
        }
        int i=0;
        int carry=0;
        while(i<nums.size() and i<v.size())
        {
            int val=nums[i]+v[i]+carry;
            carry=val/10;
            ans.push_back(val%10);
            i++;
        }
          while( i<v.size())
        {
            int val=v[i]+carry;
            carry=val/10;
            ans.push_back(val%10);
            i++;
        }
        while(i<nums.size())
        {
            int val=nums[i]+carry;
            carry=val/10;
            ans.push_back(val%10);
            i++;
        }
        if(carry!=0)
        {
            ans.push_back(carry);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};