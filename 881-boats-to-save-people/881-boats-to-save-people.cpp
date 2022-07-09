class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
//         int n=people.size();
//         int c=0;
//         if(n==0) return 0;
//         if(n==1)
//         {
//             if(people[0]<=limit)
//                 return 1;
//             else
//                 return 0;
//         }
//         if(n>=2)
//         {
//         for(int i=0;i<n;i++)
//         {
             
//             if(i<n-1 and people[i]+people[i+1]<=limit)
//                 c++;
            
//             else if(people[i]<=limit)
//                 c++;
            
          
//         }
//         }
//         return c;
//     }
        
        sort(people.begin(),people.end());
        
        int i = 0, j = people.size() - 1,cnt = 0;
        
        while(i <= j)
        {   
            // lightest person + heaviest person sum <= limit
            // they can go together
            if(people[i] + people[j] <= limit)
            {
                i++;
                j--;
                cnt++;
            }
            else if(people[j]<=limit){
                j--;
                cnt++;
            }
            
              else if(people[i]<=limit){
                i++;
                cnt++;
            }
            
            
              
        }
        
        return cnt;
        
    }
};