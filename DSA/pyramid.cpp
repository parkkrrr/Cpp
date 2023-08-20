#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    for(int i=1; i<n; i++){
        for(int j=1; j<n-1; j++){
            cout<<" ";
        }
        cout<<endl;
        for(int k=i; k<2*i-1; k++){
            cout<<i;
        }
    }
    return 0;
}