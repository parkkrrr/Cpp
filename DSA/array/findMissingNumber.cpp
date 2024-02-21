#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int n){
    int hash[n+1]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]=1;
    }
    for(int i=1;i<=n;i++){
        if(hash[i]==0)
            return i;
    }
}