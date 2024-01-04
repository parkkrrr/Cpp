#include <iostream>

int lowerBound(int arr[], int n, int target) {
    int ans = -1;
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= target) {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    // if (ans == n || arr[ans] != target)
    //     return -1;
    return ans;
}

int upperBound(int arr[], int n, int target) {
    int ans = -1, low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] > target) {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    // if(arr[ans]!=target||ans==n)
    //     return -1;
    return ans;
}

void bs(int arr[], int n, int target) {
    int firstocc = lowerBound(arr, n, target);
    int lastocc = upperBound(arr, n, target);
    if (firstocc == n || arr[firstocc] != target) {
        firstocc = -1;
        lastocc = -1;
    }

    // return std::make_pair(firstocc,lastocc);
    std::cout << firstocc << "\n" << lastocc-1 << "\n";
}

int main() {
    int arr[]{ 2, 4, 6, 8, 8, 8, 11, 13 };
    int size = sizeof(arr) / sizeof(int);
    bs(arr, size, 8);
    // std::cout<<last(arr,size,8);
    return 0;
}