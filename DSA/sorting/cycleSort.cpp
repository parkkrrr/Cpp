#include <iostream>
#include "../printarr.hpp"
using namespace std;

void cycleSort(int arr[], int n){
    int i{};
    while(i<n){
        if(arr[i]==arr[i+1])
            i++;
        else
            swap(arr[i],arr[arr[i]-1]);
    }
    
}

int main() {
    int arr[]={2,1,5,3,1,3};
    cycleSort(arr, n);
    print();
}