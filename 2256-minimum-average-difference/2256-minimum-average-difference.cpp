class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n=nums.size();
       long long prefix[n];
        prefix[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            prefix[i]=prefix[i-1]+nums[i];
        }
        
        // for(int i=0;i<n;i++)
        // {
        //     cout<<prefix[i]<<" ";
        // }
        long long mini=INT_MAX;
        int index;
        for(int i=0;i<n;i++)
        {
            int n1=i+1;
            int p=prefix[i]/n1;
            int q=(prefix[n-1]-prefix[i])/max((n-n1),1);
            
            int ans=abs(p-q);
           // cout<<p<<" "<<q<<endl;
            if(ans<mini)
            {
                mini=ans;
                index=i;
            }
            
        }
        return index;
    }
};

