class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
     vector<int> v;
        
        for(int i=0;i<m;i++)
        {
            v.push_back(nums1[i]);
        }
         
        for(int i=0;i<n;i++)
        {
            v.push_back(nums2[i]);
        }
        
        sort(v.begin(),v.end());
        for(int i=0;i<n+m;i++)
        {
            nums1[i]=v[i];
        }
    }
};