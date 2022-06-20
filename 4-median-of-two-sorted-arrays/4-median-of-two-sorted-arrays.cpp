class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int n1=nums1.size();
        int n2=nums2.size();
        
        for(int i=0;i<n1;i++)
        {
           ans.push_back(nums1[i]);
        }
         for(int i=0;i<n2;i++)
        {
           ans.push_back(nums2[i]);
        }
        
        sort(ans.begin(),ans.end());
        
        int k=n1+n2;
        double ans2;
        if(k%2!=0)
        {
            ans2=(k-1)/2;
            return ans[ans2];
        }
        
        else
        {
            
            int a1=(n1+n2)/2;
            int a2=(n1+n2-1)/2;
            //cout<<ans[a1]<<" "<<ans[a2];
            ans2=(ans[a1]+ans[a2])/2.0;
            //cout<<ans2;
            
            return ans2;
        }
    }
};