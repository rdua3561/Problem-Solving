// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    int first(int arr[],int n,int x);
    int last(int arr[],int n,int x);
    vector<int> v;
    int v1,v2;
    v1=first(arr,n,x);
    v2=last(arr,n,x);
    v.push_back(v1);
    v.push_back(v2);
    
    return v;
}

int first(int arr[],int n,int x)
{
    int l=0,h=n-1;
    int res=-1;
    while(l<=h)
    {
        int mid=l+(h-l)/2;
        if(arr[mid]==x)
        {
            res=mid;
            h=mid-1;
        }
        
        else if(arr[mid]<x)
        {
           l=mid+1; 
        }
        
        else
        {
            h=mid-1;
        }
    }
    return res;
}
int last(int arr[],int n,int x)
{
    int l=0,h=n-1;
    int res=-1;
    while(l<=h)
    {
        int mid=l+(h-l)/2;
        if(arr[mid]==x)
        {
            res=mid;
            l=mid+1;
        }
        
        else if(arr[mid]<x)
        {
           l=mid+1; 
        }
        
        else
        {
            h=mid-1;
        }
    }
    return res;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


  // } Driver Code Ends