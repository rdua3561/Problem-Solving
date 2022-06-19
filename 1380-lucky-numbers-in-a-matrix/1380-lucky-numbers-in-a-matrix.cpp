class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& nums) {
        
//         int n=matrix.size();
//         int mini=INT_MAX;
//         for(int i=0;i<matrix[0].size();i++)
//         {
//             int maxi=INT_MIN;
//             for(int j=0;j<n;j++)
//             {
//                maxi=max(maxi,matrix[j][i]);
//             }
//             if(n==1 || matrix[0].size()==1 )
//                 return {maxi};
            
//            mini=min(maxi,mini);
//         }
//         if(n==matrix[0].size())
//             return {mini};
        
        
            
        
//         int c=INT_MIN;
//           for(int i=0;i<matrix[0].size();i++)
//         {
            
//             for(int j=0;j<n;j++)
//             {
//                if(matrix[j][i]==mini)
//                {
//                    c=i;
//                    break;
//                }
//             }
          
//         }
        
        
//             int flag=0;
//             for(int j=0;j<matrix[c].size();j++)
//             {
//                if(mini>matrix[c][j])
//                {
//                    flag=1;
//                    break;
//                }
//             }
           
//         if(flag==1)
//             return {};
        
//         else
//             return {mini};
        //[[3,6],[7,1],[5,2],[4,8]]
        
        vector<int> P,Q,R;
        for(int i=0;i<nums.size();i++){
            int mini=*min_element(nums[i].begin(),nums[i].end());
            P.push_back(mini);
        }
        for(int i=0;i<nums[0].size();i++){
            int maxi=0;
            for(int j=0;j<nums.size();j++){
                maxi=max(maxi,nums[j][i]);
            }
            Q.push_back(maxi);
        }
        for(int i=0;i<P.size();i++){
            for(int j=0;j<Q.size();j++){
                if(P[i]==Q[j]){
                    R.push_back(P[i]);
                    break;
                }
            }
        }
        return R;
    }
};