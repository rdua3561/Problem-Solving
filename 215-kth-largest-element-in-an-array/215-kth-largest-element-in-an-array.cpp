class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //METHOD 1: BRUTE FORCE
        // sort(nums.begin(),nums.end(),greater<>());
        // return nums[k-1];
        
        // METHOD 2: Heaps
//         priority_queue<int> pq;
        
//         for(auto i: nums)
//         {
//             pq.push(i);
//         }
        
//             while(k!=1)
//             {
//                 pq.pop();
//                 k--;
//             }
//         return pq.top();
        
        //Method 3: Priority Queue Improvement
    priority_queue<int,vector<int>,greater<int>> pq;
        
	for(int i=0;i<nums.size();++i){
		pq.push(nums[i]);
		if(pq.size()>k) pq.pop();
	}
	return pq.top();   
        
    }
};