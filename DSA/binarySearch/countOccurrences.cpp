#include <iostream>

int lb(int arr[], int n, int target){
    int first=-1;
    int low=0, high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>=target){
            first=mid;
            high=mid-1;
        }
        else 
            low=mid+1;
    }
    if(first==-1||arr[first]!=target)
        return -1;
    return first;
}

int ub(int arr[], int n, int target){
    int last=-1;
    int low=0, high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>target){
            last=mid;
            high=mid-1;
        }
        else 
            low=mid+1;
    }
    return last;
}

int main(){
    int arr[]={1,2,3,4,5,6,6,7,7,7,7,7,8,8,9,10,10};
    int size=sizeof(arr)/sizeof(int);
    int firstocc=lb(arr,size, 7);
    // std::cout<<firstocc<<ub(arr, size, 7);
    if(firstocc==-1)    
        std::cout<<"-1\n-1\n";
    else
        std::cout<<ub(arr, size, 7)-firstocc<<"\n";

    return 0;
}