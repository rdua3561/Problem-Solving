// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int nums[], int size)
    {
        
   
   int maxi=INT_MIN;
   for(int i=0;i<size;i++)
        {
            maxi=max(maxi,nums[i]);
        }
        //cout<<"asasas="<<maxi<<endl;
        
        int counter[maxi+1]={0};
    for(int i=0;i<size;i++)
        {
            
            counter[nums[i]]++;
        }
        // for(int i=0;i<=maxi;i++)
        // {
        //     cout<<i<<" "<<counter[i]<<endl;
        // }
        for(int i=0;i<=maxi;i++)
        {
            if(counter[i]> size/2)
                return i;
        }
        
        return -1;
        
    

    }
};

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends