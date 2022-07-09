class Solution {
public:
    int minSetSize(vector<int>& nums) {
        unordered_map<int,int> freq;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            freq[nums[i]]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto it: freq)
        {
            pq.push({it.second,it.first});
        }
        int c=0;
        //cout<<pq.size();
        int k=n;
        while(k-pq.top().first > n/2)
        {
            //cout<<"hello";
            k=k-pq.top().first;
            pq.pop();
            c++;
        }
        c++;
        return c;
    }
};