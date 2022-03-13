class Solution {
public:
     bool checkPalindrome(string str){
        int i=0;
        int j=str.size()-1;
        while(i<j){
            if(str[i]!=str[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    
    string firstPalindrome(vector<string>& words) {
        
        string ans="";
        for(int i=0;i<words.size();i++)
        {
            if(checkPalindrome(words[i])){
                ans=words[i];
                
                return ans;
            }
        }
        
        return ans;
        
       
        
    }
};