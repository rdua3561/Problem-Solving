class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> v;
        unordered_map<int,int> mp;
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            

        }
        
    
        int t=(nums.size()*(nums.size()+1))/2;
        
        for(auto it:mp)
        {
            if(it.second==2)
            {
                v.push_back(it.first);
                 t-=it.first;
            }
            else
            {
                 t-=it.first;
            }
        }
     
        v.push_back(t);
        
       return v;
    }
};