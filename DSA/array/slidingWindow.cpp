#include <iostream>
using namespace std;

// BruteForce
void maxSubArr(int arr[], int n, int k)
{
    int maxArr{};
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            int sum{};
            for (int l = i; l <= k; l++)
                sum = sum + arr[i];

            maxArr = max(sum, maxArr);
        }
    }
    cout << maxArr;
}

// Sliding Window
void slidingWindow(int arr, int n, int k) {}

int main()
{
    int arr[] = {1, 2, 3, 4, 3, 9, 8, 2, 5, 8, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    maxSubArr(arr, n, 2);

    return 0;
}