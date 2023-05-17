#include <iostream>
#include "../printarr.hpp"
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++)
        for(int j=0; j<n-i-1;j++)
            if(arr[j]>arr[j+1])
                swap(arr[j+1],arr[j]);
}

int main() {
    bubbleSort(arr, n);
    print(arr,n);
    return 0;
}