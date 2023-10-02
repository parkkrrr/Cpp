#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[min] > arr[j])
                min = j;
        }
        if(min!=i)
            swap(arr[i], arr[min]);
    }
}

    int main()
    {
        int arr[] = {1, 203, 4, 3, 24, 9, 76, 5};
        int n = sizeof(arr)/sizeof(int);

        selectionSort(arr, n);
        for(auto x:arr)
            cout<<x<<" ";
            
        return 0;
    }