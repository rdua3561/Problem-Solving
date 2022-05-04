class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        
        vector<int> st;
        int l=0,r=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            st.push_back(nums[i]);
        }
        sort(st.begin(),st.end());
        
        for(int i=0;i<n;i++)
        {
            if(st[i]!=nums[i])
            {
                l=i;
                break;
            }
        }
        
        for(int j=n-1;j>=0;j--)
        {
            if(st[j]!=nums[j])
            {
                r=j;
                break;
            }
        }
        cout<<l<<r;
        if(l!=r)
        return r-l+1;
        
        else
        return 0;
        
        
    }
};