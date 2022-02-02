class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        
        
        int arr[101]={0};
    
        int i,sum=0;
        for(i=0;i<nums.size();i++)
        {
            arr[nums[i]]+=1;
        }
        
         for(i=0;i<101;i++)
        {
             if(arr[i]==1)
             {
                sum+=i;
             }
         }
        
        return sum;
        
    }
};