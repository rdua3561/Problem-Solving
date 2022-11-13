class Solution {
public:
    string reverseWords(string s) {
       stack<string> stack;
        string temp="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ' ) 
            {
                if(temp.size()>0)
                {
                stack.push(temp);
                temp="";
                }
                
            }
            
            else{
                
                temp+=s[i];
                
            }
            
        }
        stack.push(temp);
        string ans;
        
        while(!stack.empty())
        {
            ans+=stack.top();
            stack.pop();
            ans += " ";
        }
        int i=0;
        while(ans[i]==' ')
        {
            i++;
        }
        int j=ans.length();
        int co=0;
        while(ans[j-1]==' ')
        {
            co++;
            j--;
        }
        //cout<<co;
        
           string rd=ans.substr(i,ans.length()-co-i);
        
        return rd;
    }
};