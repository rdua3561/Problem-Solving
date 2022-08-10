class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& arr, int k) {
//         unordered_map<int,int> m;
//         if(arr.size()==1) return false;
        
//         if(arr[0]==arr[1] and k>=2)
//             return true;
//        for(int i=0;i<k;i++)
//        {
//            m[arr[i]]+=1;
//        }
//         int t=0;
//       for(int i=k+1;i<arr.size();i++)
//       {
//           if(m.find(arr[i])!=m.end())
//           {
//               return true;
//           }
//           else
//           {
//               m.insert({arr[i],1});
//               m.erase(arr[t]);
//               t++;
//           }
//       }
//         return false;
//     }
        unordered_map<int,int> m;
    for(int i=0;i<arr.size();i++){
        if(m.find(arr[i])!=m.end()&&m[arr[i]]>=i-k)
        return true;
        m[arr[i]]=i;
    }
    return false;
    }
};