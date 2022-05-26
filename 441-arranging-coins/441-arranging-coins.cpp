class Solution {
public:
   // Method 1:Maths
    int arrangeCoins( int n) {
        //Approach: (k*(k+1))/2 <= n
        
      return sqrt(2*(double)n+0.25)-0.5;

    }
    
    //Method 2: Binary Search
//      int arrangeCoins( int n) {
     
//          int h=n,l=0;
         
//          while(l<=h)
//          {
//              int mid=l+(h-l)/2;
             
//              if(mid*(mid+1)/2<=n)
//                  l=mid+1;
                 
            
//                  else
//                      h=mid-1;
//          }
         
//          return l-1;

//     }
};