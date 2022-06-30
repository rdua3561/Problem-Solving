class Solution {
public:
    //Method 1: O(N)
//     int countOdds(int low, int high) {
//         int c=0;
//         while(low!=high)
//         {
//             if(low%2!=0)
//             {
//                 c++;
//             }
            
//             low++;
//         }
//         if(low%2!=0)
//             c++;
        
//         return c;
//     }
    
    //METHOD 2: O(1)
    int countOdds(int low, int high) {
    if(low%2==0 && high%2==0) return (high-low)/2;
		return (high-low)/2+1;
    }
};