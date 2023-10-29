#include <iostream>
using namespace std;

void merge(int arr[], int si, int mid, int ei) {
    int* temp = new int(ei - si + 1);
    int i = si;         //for the left part
    int j = mid + 1;    //for the right part
    int k = 0;          //for temp array

    while (i <= mid && j <= ei) {
        if (arr[i] < arr[j]) {
            temp[k] = arr[i];
            i++;
        }
        else {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    // left part
    while (i <= mid)
        temp[k++] = arr[i++];

    // right part
    while (j <= ei)
        temp[k++] = arr[j++];

    for (k = 0, i = si;k < (sizeof(temp) / sizeof(temp[0]));k++, i++)
        arr[i] = temp[k];
}

void mergeSort(int arr[], int si, int ei) {
    // base case
    if (si >= ei)
        return;

    int mid = si + (ei - si) / 2;
    mergeSort(arr, si, mid);
    mergeSort(arr, mid + 1, ei);
    merge(arr, si, mid, ei);
}

int main() {
    int arr[] = { 3,6,2,9,1,0,4,5,7 };
    mergeSort(arr, 0, sizeof(arr) / sizeof(arr[0])-1);
    for (auto i : arr)
        cout << i << endl;

    return 0;
}