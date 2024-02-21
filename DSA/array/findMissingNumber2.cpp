#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int n){
    int xor1=0;
    int xor2=0;
    for(int i=0;i<n;i++){
        xor1=xor1^(i+1);
        xor2^=arr[i];
    cout<<i<<" = "<<xor1<<endl<<xor2<<endl;
    }
    xor1^=n+1;
    return xor1^xor2;

}

int main(){
    int arr[]={1,2,3,4,5,6,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<findMissingNumber(arr,n);
    return 0;
}