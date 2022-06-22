class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //METHOD 1: BRUTE FORCE
        // sort(nums.begin(),nums.end(),greater<>());
        // return nums[k-1];
        
        // METHOD 2: Heaps
        priority_queue<int> pq;
        
        for(auto i: nums)
        {
            pq.push(i);
        }
        
            while(k!=1)
            {
                pq.pop();
                k--;
            }
        return pq.top();
        
    }
};