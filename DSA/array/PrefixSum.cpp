#include <iostream>
using namespace std;

void PrefixSum(int arr[], int n, int prefixSum[])
{
    prefixSum[0]=arr[0];
    for (int i = 1; i < n; i++)
        prefixSum[i] = arr[i - 1] + arr[i];
}

int main()
{
    int n;
    cin >> n;
    int prefixSum[n];
    int arr[n];
    for (int i = 0; i < n; i++)
        cin>> arr[i];
    
    PrefixSum(arr, n, prefixSum);

    for (int i = 0; i < n-1; i++)
        printf("prefixSum[%d] --> %d \n", i, prefixSum[i]);

    return 0;
}