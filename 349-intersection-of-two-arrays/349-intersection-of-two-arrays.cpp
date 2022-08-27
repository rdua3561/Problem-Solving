class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_set<int> s1;
        vector<int> v;
        
        for(auto i: nums1)
        {
            s1.insert(i); //unique elements chale jynge unordered_set mai
            
        }
     
        
        for(auto i: nums2)
        {
            if(s1.find(i)!=s1.end())
            {
                v.push_back(i);   //push ho jynge vector mai elements
                                   
                s1.erase(i);      //set 1 (s1) sae delete krr doa jo mil gya hai 
                                  // nums2 mai, jissea agar nums2 array mai                                         // repeated ho jo elements, wo s1 mai na mile                                     //and 1 hi baar print ho
            }
        }
        
        return v;
    }
};