class Solution {
public:
    int minimizeXor(int num1, int num2) {
        
        int c=0;
        while(num2!=0)
        {
            if(num2&1)
                c++;
            num2>>=1;
        }
        vector<int> one(32,0);
        vector<int> v(32,0);
        
        int pos=0;
        while(num1!=0)
        {
            if(num1&1)
            {
                one[pos]++;
            }
            num1>>=1;
            pos++;
        }
        
        for(int i=31;i>=0;i--)
        {
            if(one[i]==1 and c)
            {
                c--;
                v[i]++;
            }
            
        }
        
        for(int i=0;i<32;i++)
        {
            if(c and one[i]==0)
            {
                c--;
                v[i]++;
            }
        }
        
        int result=0;
        for(int i=0;i<32;i++)
        {
            if(v[i])
            result+=pow(2,i);
        }
        return result;
    }
};