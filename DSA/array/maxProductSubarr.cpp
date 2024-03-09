#include <iostream>
using namespace std;

//optimised solution
int maxProductSubarray(int arr[], int n){
    int curr=1, maxi=0;
    for(int i=0;i<n;i++){
        curr*=arr[i];
        if(curr>maxi)
            maxi=curr;
        if(curr<0)
            curr=0;
    }
    curr=1;
    for(int i=n-1;i>=0;i--){
        curr*=arr[i];
        if(curr>maxi)
            maxi=curr;
        if(curr<0)
            curr=0;
    }
    return maxi;
}

int main(){
    int arr[]={2,3,-2,4};
    int n=sizeof(int)/sizeof(arr);

    cout<<maxProductSubarray(arr, n);
    return 0;
}