#include <iostream>

int bs(int arr[], int size, int target) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid;
        if (arr[low] <= arr[mid]) {
            if (arr[low] <= target && arr[mid] >= target)
                high = mid - 1;
            else
                low = mid + 1;
        }
        else
            if (arr[mid] <= target && arr[high] >= target)
                low = mid + 1;
            else
                high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = { 7,8,9,1,2,3,4,5,6 };
    int size = sizeof(arr) / sizeof(int);
    std::cout << bs(arr, size, 9);

    return 0;
}