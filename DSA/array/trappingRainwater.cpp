#include <bits/stdc++.h>
using namespace std;

void calculatingRainwater(int height[], int n)
{
    if (n < 2)
        return;
    int trapped {};
    int minBoundary {*min_element(height,height+n)};
    int maxBoundary {*max_element(height,height+n)};
    // while(n--){
    //     if(height[n]>maxBoundary)
    //         maxBoundary=height[n];
    //     if(height[n]<minBoundary)
    //         minBoundary=height[n];

    //     cout<<maxBoundary<<endl<<minBoundary<<endl;
    // }

    // int sum {};
    for (int i = 1; i < n - 1; i++)
    {
        // if ((height[i - 1] > height[i] && height[i + 1]) > height[i])
        // {
        //     int mini = min(height[i - 1], height[i + 1]);
            trapped += mini - height[i];
        }
    }
    cout<< trapped<<endl;
}

int main()
{
    int height[]{4,2,0,6,3,2,5};
    int n = sizeof(height) / sizeof(height[0]);

    calculatingRainwater(height, n);
    return 0;
}
