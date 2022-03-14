class Solution {
public:
    bool isValid(string s) {
        
        stack <char> st;
        
        if(s[0]==')' || s[0]==']' || s[0]=='}')
             return false;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                st.push(s[i]);
            }
            
            else 
            {
                
            if(st.empty())
                return false;
            if( s[i]==')' && st.top()!='(' )
                return false;
                
            if( s[i]=='}' && st.top()!='{' )
                return false;
                
            if( s[i]==']' && st.top()!='[' )
                return false;
            st.pop();
            }
        }
        
        return st.empty();
    }
};