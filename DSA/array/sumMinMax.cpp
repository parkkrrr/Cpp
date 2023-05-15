// #include <bits/stdc++.h>
// int sumOfMaxMin(int arr[], int n){
// 	sort(arr,arr+n);
// 	return arr[0]+arr[n-1];
// }

#include <bits/stdc++.h>
int sumOfMaxMin(int arr[], int n)
{
    int min = arr[0], max = arr[0];
    for (int i = 0; i < n; i++)
        if (max < arr[i])
            max = arr[i];
        else if(min>arr[i])
            min = arr[i];
    int sum = max + min;
    return sum;
}