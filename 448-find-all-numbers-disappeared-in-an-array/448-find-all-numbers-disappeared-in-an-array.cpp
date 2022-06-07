class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> v;
        unordered_set<int> s;
       for(auto i : nums)
       {
            s.insert(i);
       }
        for(int i=1;i<=n;i++)
        {
            if(s.find(i)==s.end())
            {
                v.push_back(i);
            }
        }
        
        return v;
        
    }
};