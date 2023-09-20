#include <iostream>
using namespace std;

long long maxSubarraySum(int arr[], int n){
    long currentSum {};
    long largestSum {arr[0]};

    for(int i=0; i<n; i++){
        currentSum+=arr[i];
        largestSum=max(largestSum, currentSum);
        if(currentSum<0)
            currentSum=0;
    }
    return largestSum;
}

int main(){
    int arr[]={-1,2,-2,5,7,-3,1};
    int n {sizeof(arr)/sizeof(int)};
    cout<<maxSubarraySum(arr, n);

    return 0;
}