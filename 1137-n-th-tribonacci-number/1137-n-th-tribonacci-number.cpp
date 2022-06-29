class Solution {
public:
    //METHOD 1: Recursion + Memoization.....gives TLE for N=35
//     int help(int n,long int dp[])
//     {
//         if(n==0){
//             dp[0]=0;
//             return dp[0];
//         }
        
//         if(n==1)
//         {
//              dp[1]=1;
//             return dp[1];
//         }
        
//         if(n==2)
//         {
//              dp[2]=1;
//             return dp[2];
           
//         }
//             if(dp[n]!=-1)
//             {
//                 return dp[n];
//             }
        
//         return dp[n]=tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
//     }
    
//     int tribonacci(int n) {
        
//         long int dp[n+1];
//         memset(dp,-1,sizeof(dp));
//         return help(n,dp);
        
//     }
    
    //Method 2:Tabulation(Bottom Up)
    int tribonacci(int n) {
    vector<int> ans={0,1,1};
        
        for(int i=3;i<=n;i++)
        {
            ans.push_back(ans[i-1]+ans[i-2]+ans[i-3]);
        }
        return(ans[n]);
    }
};