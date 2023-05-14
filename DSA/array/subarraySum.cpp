#include <iostream>
using namespace std;

int maxSumSubarray(int arr[], int n)
{
    int maxSum{};

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sumSubarray{};
            for (int k = i; k <= j; k++)
                sumSubarray += arr[k];
            maxSum = max(maxSum, sumSubarray);
        }
    }
    return maxSum;
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3, 2};
    int n{sizeof(arr) / sizeof(int)};

    cout << maxSumSubarray(arr, n);
    return 0;
}