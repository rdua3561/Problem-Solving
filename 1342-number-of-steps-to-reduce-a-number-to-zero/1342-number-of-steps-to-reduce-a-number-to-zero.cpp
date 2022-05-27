class Solution {
public:
    int numberOfSteps(int num) {
        int c=0;
        while(num!=0)
        {
            if(num%2==0)
            {
                num>>=1;
                c++;
            }
            else
            {
                num-=1;
                c++;
            }
        }
        
          return c;  
        
    }
};