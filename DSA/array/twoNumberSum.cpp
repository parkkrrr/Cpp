#include <iostream>
using namespace std;

int twoNumberSum(int arr[], int n, int x){
    for(int i=0;i<n;i++)
        for(int j=i+1; j<n; j++)
            if((arr[i]+arr[j])==x){
                cout<<arr[i]<<"+"<<arr[j]<<"="<<arr[i]+arr[j];
                return 0;
            }  
    return -1;
}

int main(){
    int x;
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter a number: ";
    cin>>x;

    cout<<twoNumberSum(arr,n,x);

    return 0;
}