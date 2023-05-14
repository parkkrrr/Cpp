#include <iostream>
using namespace std;

int maxSubarraySum(int arr[], int n){
    int currentSum {};
    int largestSum {};

    for(int i=0; i<n; i++){
        currentSum+=arr[i];
        if(currentSum<0)
            currentSum=0;
        largestSum=max(largestSum, currentSum);
    }
    return largestSum;
}

int main(){
    int arr[]={-2,3,4,-1,5,-12,6,1,3,2};
    int n {sizeof(arr)/sizeof(int)};
    cout<<maxSubarraySum(arr, n);

    return 0;
}