class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int c[256]={0};
        
        for(int i=0;i < stones.length();i++)
        {
            c[stones[i]-'0']++;
            
        }
        int counter=0;
        
         for(int i=0;i < jewels.length();i++)
        {
        for(int j=0;j<stones.length();j++)
        {
            if(jewels[i]==stones[j] &&  c[stones[j]-'0']>0)
            {
                counter++;
                c[stones[j]-'0']--;
                
            }
        }
         }
        return counter;
    }
};