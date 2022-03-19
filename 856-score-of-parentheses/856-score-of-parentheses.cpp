class Solution {
public:
    int scoreOfParentheses(string s) {
        int n=s.length();
        int c=0;
        stack<char> st;
        
        
        for(int i=0;i<n;i++)
        {
            
            if(s[i]=='(')
            {
                st.push(c);
                c=0;
                
            }
            else{
                c = st.top()+max(2*c,1);
        
                st.pop();
            }
        }
        
        return c;
    }
};