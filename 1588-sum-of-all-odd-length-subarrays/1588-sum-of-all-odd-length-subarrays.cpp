class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        
        int totalSum=0, count, temp;
        
        for(int k=0;k<arr.size();k++){
            
            count=0;temp=1;
            
            for(int i=k;i<arr.size();i++){
                count+=arr[i];
                
                if(temp%2!=0) 
                    totalSum+=count;
                
                temp++;
            }   
        }
        return totalSum;
        
    }
};