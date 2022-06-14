class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        int n=arr.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        
        // for(auto i:mp)
        // {
        //     int key=i.second;  //Here the problem is it will find i.second 
        //     if(mp.find(key)!=mp.end());//in our hashmap i.first.....bcoz find mai key key                                            sae hi compare hota hai
        //     {
        //         return false;
        //     }
        // }
        // return true;
        
        unordered_set<int> s;
        
        for(auto i:mp)
        {
            s.insert(i.second);
        }
        if(mp.size()==s.size())
            return 1;
        else
            return 0;
        
    }
};