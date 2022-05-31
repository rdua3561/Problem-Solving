class Solution {
    
    public:
vector<vector<int>> v;
void help(vector<int>& nums,int i,vector<int>& st)
{
    if(i==nums.size())
    {
        v.push_back(st);
        return;
    }
    
    //pick
    st.push_back(nums[i]);
    help(nums,i+1,st);
    st.pop_back();
    
    //not pick
    help(nums,i+1,st);
}

    vector<vector<int>> subsets(vector<int>& nums) {
        
    vector <int> st;
        int i=0;
        help(nums,i,st);
       return v;
    }
};