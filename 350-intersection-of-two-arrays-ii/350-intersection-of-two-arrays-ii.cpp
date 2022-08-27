class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    
//         unordered_map<int,int> map;
//         vector<int> v;
//         for(auto i:nums1)
//         {
//             map[i]++;
//         }
        
//          for(auto i:nums2)
//              {
//                  if(map[i]>0)
//                  {
//                      v.push_back(i);
//                      map[i]--;
//                  }
//              }
        
//         return v;
        
         unordered_map<int,int> mp;
        vector<int> v;
        for(int i=0;i<nums1.size();i++)
        {
            mp[nums1[i]]++;
        }
        
         for(int i=0;i<nums2.size();i++)
        {
             auto it=mp.find(nums2[i]);
            if(it!=mp.end())
            {
                if(it->second>0)
                {
                v.push_back(it->first);
                it->second--;
                }
            }
        }
        return v;
        
    }
};