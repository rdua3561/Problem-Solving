class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        double sum=0;
        double maxi=INT_MIN;
        if(nums.size()>=k){
        while(j<nums.size())
        {
            sum+=nums[j];
            if(j-i+1<k)
            {
                j++;
            }
            
            else if(j-i+1==k)
            {
                
                //sum=sum/k;
                
                maxi=max(sum/k,maxi);
                sum-=nums[i];
                i++;
                j++;
            }
        }
        return double(maxi);
        }
        
        else
        {
            return -1;
        }
    }
};