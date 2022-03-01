class Solution {
public:
    vector<int> countBits(int n) {
        // NlogN
        vector <int> st;
        
//         for(int i=0;i<=n;i++)
//             {
//                 int c=0;
//                 int num=i;
//                 while(num!=0)
//                 {
                
//                    c=c+num%2;
//                     num=num/2;
//                 }
//                 st.push_back(c);
//             }
//             return st;
        
        //TC: N
        st.push_back(0);
        for(int i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                st.push_back(st[i/2]);
            }
            else
            {
                st.push_back(st[i/2]+1);
            }
        }
        
        return st;
        
    }
};