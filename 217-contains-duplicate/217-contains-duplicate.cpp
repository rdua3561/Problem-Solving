class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //Method 1
//         set<int> s;
//         for(auto i:nums)
//         {
//             if(s.find(i)!=s.end())
//                 return true;
//               s.insert(i);
//         }
        
//         return false;
//     }
    //Method 2
        
        set<int> s;
        s.insert(nums.begin(),nums.end()); 
		
        if (nums.size()!=s.size())
		
            return true;
        
        else
            return false;
        
    }
        
};

    