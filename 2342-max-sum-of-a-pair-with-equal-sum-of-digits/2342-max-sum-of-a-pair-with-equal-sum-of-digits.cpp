class Solution {
public:
    // long long Sum_of_digits(long long n)
    // {
    //     long long s=0;
    //     while(n>0)
    //     {
    //         s+=n%10;
    //         n=n/10;
    //     }
    //     return s;
    // }
    int maximumSum(vector<int>& nums) {
//         long long n=nums.size();
       
//         int ans=-1;
//        unordered_map<int,int> mp;
//        vector<int> res;
//           for(int i=0;i<n;i++)
//           {
//               res.push_back(Sum_of_digits(nums[i]));
            
//               if(mp.find(res[i])!=mp.end())
//               {
                  
//                   ans=max(ans,nums[i]+mp[res[i]]);
//               }
//               else if(nums[i]>mp[res[i]])
//               {
//                  mp[res[i]]=nums[i]; 
                
//               }
               
//           }
               
    
       
//         return ans;
        int n = nums.size();
    vector<int> v;
    int ans=-1;
    vector<pair<int,int>> p;
    for( int i=0;i<n ;i++){ 
        int a=0, sum=0;
        a=nums[i]; 
         while (a != 0) {
            sum = sum + a % 10;
             a = a / 10;
        }
       
        v.push_back(sum);
    }
    for(int i=0 ;i<n;i++){
        p.push_back(make_pair(v[i], nums[i]));
    }
    sort(p.begin(),p.end());
      
         for(int i=1;i<n ;i++){
             if(p[i].first == p[i-1].first){
                 ans=max(ans,p[i].second+p[i-1].second);
             }
         }
    return ans;
        
    }
};