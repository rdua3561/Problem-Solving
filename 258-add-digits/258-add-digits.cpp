class Solution {
public:
    
    int sum(int n)
    {
        if(n==0)
        return 0;
        
        return n%10+sum(n/10);
    }
    int addDigits(int num) {
        
        while(num>9)
        {
         num=sum(num);
        }
        
        return num;
    }
};