class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        if(nums.size()==0 || nums.size()==1)
        {
            return ans;
        }
        for(int i=0;i<nums.size()-2;i++)
        {
            
        
        int j=i+1;
        int k=nums.size()-1;
        int sum=-nums[i];
        
        while(j<k)
        {
            
         if(nums[j]+nums[k]<sum)
            {
                j++;
            }
            else if(nums[j]+nums[k]>sum)
                k--;
            
            else if(nums[j]+nums[k]==sum)
            {
                vector<int> v;// this is impt, vector yeahi bnega sirf , upar bnyoge toh element repeat hokr push honge
                v.push_back(nums[i]);
                v.push_back(nums[j]);
                v.push_back(nums[k]);
                 ans.push_back(v);
                 while(j<k && nums[j]==nums[j+1])     // skip the duplicate 
                        j++;
                    
                    while(j<k && nums[k]==nums[k-1])   // skip the duplicate
                        k--;
                j++;
                k--;
            }
          
           
        }
            
            while(i<nums.size()-1 && nums[i+1]==nums[i])     // skip the duplicate 
                        i++;
          
        }
        
        
        return ans;
    }
};

