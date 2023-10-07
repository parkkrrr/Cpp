#include <bits/stdc++.h>
using namespace std;

void buySellStock(int arr[], int n){
    int buy=INT_MAX;
    int maxProfit;
    int profit{};
    
    for(int i=0;i<n;i++){
        if(buy<arr[i]){
            profit=arr[i]-buy;
            maxProfit=max(maxProfit,profit);
        }
        else{
            buy=arr[i];
        }
    }
    cout<<maxProfit<<endl;

}

int main(){
    int arr[]={7,1,5,3,6,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    // int len = *(&arr + 1) - arr;
    buySellStock(arr,n);
    return 0;
}