class Solution {
public:
 long long gcd(long long int a, long long int b)
     {
       if (b == 0)
           return a;
        return gcd(b, a % b);
      }
 
      long long lcm(long long int a, long long int b)
      {
        return (a * b)/gcd(a, b);
       }
  
    int subarrayLCM(vector<int>& nums, int k) {
     int size=nums.size(),count=0;
        for(int i=0;i<size;i++){
        int LCM=nums[i];
            for(int j=i;j<size;j++){
                LCM=lcm(LCM,nums[j]);
                if(LCM==k)
                    count++;
                else if(LCM>k)
                    break;
            }
        }
        return count;
    }
};

  