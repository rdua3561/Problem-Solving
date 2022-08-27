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
             
            if(mp.find(nums2[i])!=mp.end())
            {
                if(mp[nums2[i]]>0)
                {
                v.push_back(nums2[i]);
                mp[nums2[i]]--;
                }
            }
        }
        return v;
        
    }
};