#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++)
        for(int j=0; j<n-i-1;j++)
            if(arr[j]>arr[j+1])
                swap(arr[j+1],arr[j]);
}

int main() {
    int arr[] {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, n);

    for(auto i: arr)
        cout<< i <<" ";

    return 0;
}