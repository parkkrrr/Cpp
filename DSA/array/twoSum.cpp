#include <bits/stdc++.h>
using namespace std;

int twoSum(int arr[], int n, int x)
{
    if (n < 2)
        return -1;
    sort(arr, arr + n);
    int left = 0;
    int right = n - 1;
    int i = 1;
    // int sum;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    while (left < right)
    {
        cout << "\nStep " << i << "\n";
        cout << "Comparing: " << arr[left] << " " << arr[right] << "\n";
        if ((arr[left] + arr[right]) == x)
        {
            cout << arr[left] << " ";
            return arr[right];
        }

        else if ((arr[left] + arr[right]) < x)
        {
            cout << "Incrementing left\t" << left << "\t" << arr[left] << "\n";
            left += 1;
        }
        // else if ((arr[left] + arr[right]) > x)
        // {
        //     cout << "Decrementing right\t" << right << "\t" << arr[right] << "\n";
        //     right -= 1;
        // }
        // else
        //     return -1;
        // i++;
        else
            right-=1;
    }
    return -1;
}

int main()
{
    int arr[] = {3,2,4,5,8,3,2,5,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    cout << twoSum(arr, n, 13);
    return 0;
}