#include <iostream>
using namespace std;

void printArr(int *arr, int n){
    arr[2]=30;      //It will change the value in the main function as array is passed by reference. It also confirms the fact that array have common memory location.
    cout<<sizeof(arr)/sizeof(n)<<" - In function"<<endl;        //Output-2, because in main function array is passed as an pointer address and pointer takes 8bytes, so 8/4=2
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

int main() {

    int arr[]={1,2,3,4,5,6,7,8};

    int n=sizeof(arr)/sizeof(int);
    cout<<n<<" - In Main"<<endl;
    printArr(arr, n);

     for(int i=0; i<n; i++){
        cout<<arr[i]<<"\t";
    }

    return 0;
}