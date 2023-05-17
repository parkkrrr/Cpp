#include <iostream>
using namespace std;

int arr[]{-2, 3, 4, -1, 5, -12, 6, 1, 3};
int n = sizeof(arr) / sizeof(arr[0]);

void print(int arr[]=arr, int n=n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}