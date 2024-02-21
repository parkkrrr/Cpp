#include <iostream>
using namespace std;

void reverse(int arr[], int n, int l, int r){
    if(l>=r)
        return;
    swap(arr[l],arr[r]);
    reverse(arr, n, l+1, r-1);
}

void reverse2(int arr[], int n, int i){
    if(i>=n/2)
        return;
    swap(arr[i], arr[n-i-1]);
    reverse2(arr, n, i+1);
}

int main(){
    int arr[]={1,2,3,4,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    reverse2(arr,n,0);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}