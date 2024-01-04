#include <iostream>

int first(int arr[], int n, int target) {
    int fi = -1;
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            fi = mid;
            high = mid - 1;
        }
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    if (fi == -1)  return -1;
    return fi;
}

int last(int arr[], int n, int target) {
    int la = -1;
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            la = mid;
            low = mid + 1;
        }
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    if (la == -1)  return -1;
    return la;
}

// std::pair<int, int> bs(int arr[], int n, int target) {
void bs(int arr[], int n, int target) {
    int firstocc = first(arr, n, target);
    int lastocc = last(arr, n, target);
    // return std::make_pair(firstocc,lastocc);
    // std::cout<<lastocc-firstocc;
    std::cout<<firstocc<<"\n"<<lastocc<<"\n";
}

int main() {
    int arr[]{ 2, 4, 6, 8, 8, 8, 11, 13 };
    int size = sizeof(arr) / sizeof(int);
    bs(arr, size, 8);
    // std::cout<<last(arr,size,8);
    return 0;
}
