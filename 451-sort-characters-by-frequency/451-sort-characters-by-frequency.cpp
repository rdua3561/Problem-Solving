class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        for(auto it: s)
        {
            freq[it]++;
        }
    
        priority_queue<pair<int,char>> pq;
        
        for(auto it: freq)
        {
            pq.push({it.second,it.first});
        }
        string temp="";
        while(!pq.empty())
        {
            temp+=string(pq.top().first,pq.top().second);
            pq.pop();
        }
        
        return temp;
    }
};