//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> duplicates(int arr[], int n)
    {
        sort(arr, arr + n);
        int done = -1;
        vector<int> elements;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] == arr[i + 1] && done != arr[i])
            {
                elements.push_back(arr[i]);
                done = arr[i];
            }
        }
        // if (!elements.empty())
        //     return elements;
        if (done != -1)
            return elements;
        else
            return {-1};
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans)
            cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends

// class Solution {
// public:
//     vector<int> duplicates(int arr[], int n) {
//         sort(arr, arr + n);
//         int done = -1;
//         vector<int> elements;
        
//         // Check for early termination
//         if (arr[0] != arr[n - 1]) {
//             return {-1};
//         }

//         elements.reserve(n - 1); // Reserve space for maximum possible duplicates

//         for (int i = 0; i < n - 1; i++) {
//             if (arr[i] == arr[i + 1] && done != arr[i]) {
//                 elements.push_back(arr[i]);
//                 done = arr[i];
//             }
//         }

//         if (!elements.empty())
//             return elements;
//         else
//             return {-1};
//     }
// };
