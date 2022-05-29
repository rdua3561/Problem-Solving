class Solution {
public:
    //Method 1: Iteration
//     int numberOfSteps(int num) {
//         int c=0;
//         while(num!=0)
//         {
//             if(num%2==0)
//             {
//                 num>>=1;
//                 c++;
//             }
//             else
//             {
//                 num-=1;
//                 c++;
//             }
//         }
        
//           return c;   
//     }
    
    //Method 2: Recursion
    
   int numberOfSteps(int num) {
       if(num==0)
       {
         return 0;
       }
      
       
       if(num%2==0)
       {
          return 1+numberOfSteps(num/2);
       }
       
       else
       {
          return 1+numberOfSteps(num-1);
       }
    }
};