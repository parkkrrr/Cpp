#include <iostream>

int bs(int arr[], int n) {
    int low = 0, high = n - 1;

    if (n == 1)    return arr[0];
    if (arr[n - 1] != arr[n - 2])  return arr[n - 1];
    if (arr[0] != arr[1]) return arr[0];

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] != arr[mid + 1] && arr[mid] != arr[mid - 1])
            return mid;
        else
            if ((mid & 1 && arr[mid - 1] == arr[mid]) || (!(mid & 1) && arr[mid + 1] == arr[mid]))
                low = mid + 1;
            else
                high = mid - 1;
    }
}

int main() {
    int arr[]{ 0,1,1,2,2,3,3,5,5,6,6,7,7,8,8 };
    int size = sizeof(arr) / sizeof(int);
    std::cout << bs(arr, size);

    return 0;
}