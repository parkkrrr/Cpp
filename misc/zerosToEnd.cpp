#include <iostream>
#include <vector>
using namespace std;

void movingZerosToEnd(vector<int> &arr, int n)
{
    int j = 0;

    for (int i=0; i < n; i++){
        if (arr[i] != 0 && arr[j] == 0){
            swap(arr[i], arr[j]);
            cout<<"swapping i->"<<arr[i]<<"\t"<<"j->"<<arr[j]<<endl;
            // int temp=arr[i];
            // arr[i]=arr[j];
            // arr[j]=temp;
        }
        if (arr[j] != 0)
            j++;
            cout<<"i->"<<i<<"\t"<<"j->"<<j<<endl;
        }
}

int main()
{
    vector<int> arr{0, 1, 2, 0, 3, 0, 6, 4, 3, 0};
    int n = arr.size();

    movingZerosToEnd(arr, n);
    for (auto i : arr)
        cout << i << endl;

    return 0;
}

// void pushZerosToEnd(int arr[], int n) {
// 	    int l=0;
// 	    int r=0;
// 	    while(r<n){
// 	        if(arr[r]!=0){
// 	            swap(arr[l],arr[r]);
// 	            l++;
// 	        }
// 	        r++;
// 	    // code here
// 	    }
// 	}
