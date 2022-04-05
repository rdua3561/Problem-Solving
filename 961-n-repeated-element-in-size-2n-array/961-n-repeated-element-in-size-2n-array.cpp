class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        
        unordered_map<int,int>umap;

    for(int i : nums){
        umap[i]++;
        if(umap[i]>1)
            return i;
    }
    return 0;

        
    }
};