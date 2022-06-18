class Solution {
public:
    
    vector<vector<int>> v;
void help(vector<int>& nums,int i,vector<int>& st)
{
    if(i==nums.size() )
    {
        v.push_back(st);
        return;
    }
    
    //pick
    st.push_back(nums[i]);
    help(nums,i+1,st);
    st.pop_back();
    
   while(i+1<nums.size() and nums[i]==nums[i+1])
       i++;
    //not pick
    help(nums,i+1,st);

}

    
vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    
    sort(nums.begin(),nums.end());
    vector <int> st;
    int i=0;
        
     help(nums,i,st);
        
     sort(v.begin(),v.end());
     return v;
    }
    
};