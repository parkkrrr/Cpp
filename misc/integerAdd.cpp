#include <iostream>
using namespace std;

int sum(int arr[], int n, int add){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum*10+arr[i];
    }
    return sum+add;
}

int main(){
    int arr[]={1,2,0,0};
    int n = sizeof(arr)/sizeof(int);
    cout<<sum(arr,n, 34);

    return 0;
}