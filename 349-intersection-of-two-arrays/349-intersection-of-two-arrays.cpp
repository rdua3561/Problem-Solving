class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        set<int> s1;
        vector<int> v;
        
        for(auto i: nums1)
        {
            s1.insert(i);
            
        }
     
        
        for(auto i: nums2)
        {
            if(s1.find(i)!=s1.end())
            {
                s1.erase(i);
                v.push_back(i);
            }
        }
        
        return v;
    }
};