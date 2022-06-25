class Solution {
public:
    void help(int i,string s,vector<string>& ans, string temp)
    {
        if(s[i]==NULL)
        {
            ans.push_back(temp);
            return;
        }
        
        if(s[i]>='0' and s[i]<='9')
        {
            temp+=s[i];
            help(i+1,s,ans,temp);
            temp.pop_back();
            
         
        }
        
         if(s[i]>='a' and s[i]<='z')
        {
              temp+=s[i];
            help(i+1,s,ans,temp);
            temp.pop_back();
            
             
             temp+=s[i]-32;
             help(i+1,s,ans,temp);
             temp.pop_back();
            
             
        }
        
         if(s[i]>='A' and s[i]<='Z')
        {
             //ek baar A ko a banao
             temp+=s[i]+32;
            help(i+1,s,ans,temp);
            temp.pop_back();
            
             //ek baar A ko A hi rhne doa
             temp+=s[i];
             help(i+1,s,ans,temp);
             temp.pop_back();
        }
        
      
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        int i=0;
        string temp="";
        help(i,s,ans,temp);
        return ans;
        
    }
};

 