class Solution {
public:
    bool allZero(int count[])
    {
        for(int i=0;i<26;i++)
        {
            if(count[i]!=0)
            {
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        
       int l1=s1.size();
       int l2=s2.size();
        
        if(l1>l2)
            return false;
        
        int count[26]={0};
        
        for(int i=0;i<l1;i++)
        {
            count[s1[i]-97]++;
        }
        
        for(int i=0;i<l2;i++)
        {
            count[s2[i]-97]--;
            if(i-l1>=0)
                count[s2[i-l1]-97]++;
            
            if(allZero(count))
                return true;
        }
        return false;
        
    }
};