class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map<char,int> mp;
        
        for(auto it: magazine)
        {
            mp[it]++;
            
        }
        int n=ransomNote.length();
        int c=0;
         for(int i=0;i<n;i++)
        {
            if(mp.find(ransomNote[i])!=mp.end())
            {
                c++;
                mp[ransomNote[i]]--;
                if(mp[ransomNote[i]]<0){
                
                    return false;
                    
                }
            }
           
            else
                return false;
            
        }
        
        return true;
        
        
        
    }
};