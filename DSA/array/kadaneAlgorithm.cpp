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
    int arr[]={-1,2,-2,5,7,-3,1};
    int n {sizeof(arr)/sizeof(int)};
    cout<<maxSubarraySum(arr, n);

    return 0;
}