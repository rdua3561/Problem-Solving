class Solution {
public:
    string removeDuplicates(string s) {
        int n=s.size();
        stack<char> st;
        
        int i=0;
       while(i<n)
       {
           if(st.empty()|| st.top()!=s[i])
               st.push(s[i]);
               
            else
                st.pop();
                   
        i++;
       }
        string rd="";
        while(!st.empty())
        {
            rd+=st.top();
            st.pop();
        }
        
        reverse(rd.begin(),rd.end());
        
        return rd;
        
    }
};