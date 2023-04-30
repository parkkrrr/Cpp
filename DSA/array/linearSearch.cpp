#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int search)
{

    for (int i = 0; i < n; i++)
        if (arr[i] == search)
            return i;

    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 6, 7, 435, 24, 123};
    int n = sizeof(arr) / sizeof(int);
    int search;
    cout << "Enter the Element: ";
    cin >> search;
    cout << endl;

    int result = linearSearch(arr, n, search);
    if (result != -1)
        cout << "Element found at index: " << result;
    else
        cout << "Element not found";

    return 0;
}