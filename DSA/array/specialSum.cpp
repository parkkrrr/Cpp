#include <bits/stdc++.h> 
int specialSum(vector<int>& arr, int n){
    // Write your code here.
    int sum=0;
    // int rem;
    for(auto i:arr)
        sum+=i;
    while(sum>9){
        if(sum>=10){
            int rem=sum%10;
            sum=sum/10+rem;
        }
    }
    return sum;
}