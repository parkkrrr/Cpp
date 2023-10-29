#include <iostream>
#include <utility>

std::pair<int, int> firstNlastElement(int arr[], int n, int x)
{
    // int l = 0, r = n - 1;
    int l = -1, r = -1;
    std::pair<int, int> p(l, r);

    for (int i = 0; i < n; i++)
    {
        // if (arr[l] != x)
        //     l++;
        // else if (arr[r] != x)
        //     r--;
        if (arr[i] == x)
        {
            if (l == -1)
                l = i;
            r = i;
        }
    }

    return std::make_pair(l, r);
}

int main()
{
    int arr[]{2, 3, 6, 7, 7, 8, 8, 8, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    auto res = firstNlastElement(arr, n, 8);
    std::cout << res.first << res.second << std::endl;

    return 0;
}