class Solution {
public:
    int minimumSum(int num) {
        
        // int d[4] = {}, ans = 0;
        // for (int i = 0; i < 4; ++i, n /= 10) 
        //     d[i] = n % 10;
        // sort(begin(d), end(d));
        // return 10 * (d[0] + d[1]) + d[2] + d[3];
        
         string s = to_string(num);
        sort(s.begin(), s.end());
        int res = (s[0] - '0' + s[1] - '0') * 10 + s[2] - '0' + s[3] - '0';
        return res;
        
    }
        
    
};