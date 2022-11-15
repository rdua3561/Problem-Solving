class Solution {
public:
//     int solve_gcd(int a, int b)
//     {
//         if(a==0)
//             return b;
        
//         if(b==0)
//             return a;
        
//         while(a!=b)
//         {
            
//             if(a>b)
//                 a=a-b; 
        
        
//             else
//                 b=b-a;
//         }
        
//         return a;
//     }
    
    int subarrayGCD(vector<int>& nums, int k) {
        int c=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int maxi=nums[i];
            for(int j=i;j<n;j++)
            {
                // if(maxi==k)
                // {
                // maxi=__gcd(k,nums[j]);
                // }
                // else
                //     maxi=__gcd(nums[i],nums[j]);
                maxi=__gcd(maxi,nums[j]);
                
             
                if(maxi==k)
                {
                    //cout<<nums[i]<<" "<<nums[j]<<endl;
                    c++;
                }
                
                if(maxi<k)
                {
                    break;
                }
            }
        }
        
        return c;
    }
};