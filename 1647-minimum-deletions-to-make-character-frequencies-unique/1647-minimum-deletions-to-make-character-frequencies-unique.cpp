class Solution {
public:
    int minDeletions(string s) {
        
unordered_map<char, int> kp;
        int c = 0;
        for(int i=0;i<s.length();i++) kp[s[i]]++;
        vector<int> freqs;
        for(auto i:kp) freqs.push_back(i.second);
        sort(freqs.begin(),freqs.end(), greater<int>());
        for(int i=0;i<freqs.size();i++){
            if(freqs[i] == 0) break;
            for(int j=i+1;j<freqs.size();j++)
                if(freqs[i] == freqs[j] ){
                    ++c;
                    freqs[j]-=1;
                }
        }
        return c;
    }
};