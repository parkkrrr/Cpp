#include <iostream>
using namespace std;

int select(int arr[], int i)
{
    // code here such that selecionSort() sorts arr[]
    int min = 0;

    for (int k = i + 1;i < 6;i++) {
        if (arr[k] < arr[min])
            min = k;
    }
    return min;
}


void selectionSort(int arr[], int n)
{
    for (int i = 0;i < n - 1;i++) {
        int mini = select(arr, i);

        if (mini != i)
            swap(arr[i], arr[mini]);
    }
    //code here
}

int main() {
    int arr[] = { 1, 203, 4, 3, 24, 9, 76, 5 };
    int n = sizeof(arr) / sizeof(int);

    selectionSort(arr, n);
    for (auto x : arr)
        cout << x << " ";

    return 0;
}