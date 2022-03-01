class Solution {
public:
    vector<int> countBits(int n) {
        
        vector <int> st;
        
        for(int i=0;i<=n;i++)
            {
                int c=0;
                int num=i;
                while(num!=0)
                {
                
                   c=c+num%2;
                    num=num/2;
                }
                st.push_back(c);
            }
            return st;
        
    }
};