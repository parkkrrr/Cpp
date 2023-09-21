//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        int first=-1;
        int last=-1;
        
        for(int i=0; i<n; i++){
            if(first==-1 && arr[i]==x)
                first=i;
            if(arr[i]==x)
                last=i;
        }
        return {first,last};        
        
    }
};

//{ Driver Code Starts.

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
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends

    vector<int> find(int arr[], int n , int x )
    {
        int high {n-1};
        int low {};
        int mid;
        int first {-1};
        int last {-1};
        while(high>=low){
            mid=low+(high-low)/2;
            if(arr[mid]>x)
                high=mid-1;
            else if(arr[mid]<x)
                low=mid+1;
            else{
                first=mid;
                high=mid-1;
            }
        }
        if(first==-1)
            return{-1, -1};
        high=n-1;
        low=0;
        while(high>=low){
            mid=low+(high-low)/2;
            if(arr[mid]>x)
                high=mid-1;
            else if(arr[mid]<x)
                low=mid+1;
            else{
                last=mid;
                low=mid+1;
            }
        }
        return {first, last};
    }