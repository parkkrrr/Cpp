#include <iostream>
using namespace std;

void kadane(int arr[], int n){
    int curr{};
    int currMax{arr[0]};
    for(int i=0;i<n;i++){
        curr+=arr[i];
        currMax=max(curr,currMax);
        if(curr<0)  curr=0;
    }
    cout<<currMax<<endl;
}

int main(){
    // int arr[]= {-2,-3,4,-1,-2,1,5,-3};
    int arr[]{-2,-1,-4,-3};
    int n = sizeof(arr)/sizeof(arr[0]);

    kadane(arr,n);
    return 0;
}