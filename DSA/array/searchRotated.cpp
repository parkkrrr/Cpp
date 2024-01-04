#include <iostream>
using namespace std;

int rotatedSearch(int arr[], int n, int target) {
    int high = n - 1;
    int low = 0;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid;
        if (arr[low] < arr[mid] && target < ) {

        }
    }
}

int main() {
    int arr[] = { 7,8,9,1,3,4,5,6 };
    int n = sizeof(arr) / sizeof(arr[0]);

    rotatedSearch(arr, n, 5);

    return 0;
}