class Solution {
public:
    bool areOccurrencesEqual(string s) {
        
        vector<int> cnt(26,0);
		
        for(char c : s) 
            cnt[c-'a']++;
		
        int num=cnt[s[0]-'a'];
        
        for(int i: cnt){
            if(i!=num and i!=0)
                return false;
        }
        return true;
    
    }
};