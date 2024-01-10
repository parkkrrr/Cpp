#include <bits/stdc++.h>
using namespace std;

int calculateHour(vector<int>arr, int mid){
    int result=0;
    for(int i=0;i<arr.size();i++){
        result+=(arr[i]+mid-1)/mid;
    }
    return result;
}

int koko(vector<int>arr, int hourly){
    int low=1;
    int high=*max_element(arr.begin(),arr.end());
    int ans=0;
    while(low<=high){
        int mid=low+(high-low)/2;
        ans=calculateHour(arr, mid);
        if(ans<=hourly)
            high=mid-1;
        else
            low=mid+1;
    }
    return low;    
}

int main(){
    vector<int> arr={3,6,7,11};
    cout<<koko(arr,8);
    return 0;
}



