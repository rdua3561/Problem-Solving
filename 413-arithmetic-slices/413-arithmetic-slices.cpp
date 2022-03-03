class Solution {
public:
int numberOfArithmeticSlices(vector<int>& nums) {
    if( nums.size()<3)
        return 0;
    
    int c=0;
    int total=0;
    for(int i=2;i<nums.size();i++){         //Starting when array Size >= 3
        
        if(nums[i]-nums[i-1]==nums[i-1]-nums[i-2])      //Compairing the  difference like you do in AP
        {
            c++;   //that particular no. of subarray is stored in 'c' that was checked in if condition
            total=total+c;  //total number of subarray stored
        }
        
        else
        {
            c=0;
            
        }

        }
    return total;
}
};