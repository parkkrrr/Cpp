#include <iostream>
using namespace std; 

int main() {
    int arr[100];
    int n;

    cout<<"Enter the number: ";
    cin>>n;

    //Input
    for(int i=0; i<n; i++)
        cin>>arr[i];

    //Output
    for(int j=0; j<n; j++)
        cout<<arr[j]<<"\t";

    return 0;
}