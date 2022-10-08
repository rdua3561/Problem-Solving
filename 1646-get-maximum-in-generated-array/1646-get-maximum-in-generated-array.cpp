class Solution {
public:
    int getMaximumGenerated(int n) {
    vector<int>nums(n+1);
        
    if(n<=1) return n;
    nums[1]=1;
    int maxi=0;
    
    for(int i=2;i<=n;i++){
        if(i%2==0){
            nums[i]=nums[i/2];
        }
        else if(nums[i%2!=0]){
            nums[i]=nums[i/2]+nums[i/2 +1];
        }
        maxi=max(maxi,nums[i]);
    }
    return maxi;
    }
};