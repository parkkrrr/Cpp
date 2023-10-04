#include <bits/stdc++.h>
using namespace std;

void calculatingRainwater(int height[], int n)
{
    if (n < 2)
        return;
    int trapped {};
    int waterLevel{};
    // int minBoundary {*min_element(height,height+n)};
    // int maxBoundary {*max_element(height,height+n)};
    int leftMaxBoundary[n];
    int rightMaxBoundary[n];
    leftMaxBoundary[0]=height[0];
    rightMaxBoundary[n-1]=height[n-1];

    for(int i=1;i<n;i++)
        leftMaxBoundary[i]=max(height[i],leftMaxBoundary[i-1]);
    
    for(int i=n-2;i>=0;i--)
        rightMaxBoundary[i]=max(height[i],rightMaxBoundary[i+1]);
        
    
    
    // while(n--){
    //     if(height[n]>maxBoundary)
    //         maxBoundary=height[n];
    //     if(height[n]<minBoundary)
    //         minBoundary=height[n];

    //     cout<<maxBoundary<<endl<<minBoundary<<endl;
    // }

    // int sum {};
    for (int i = 0; i < n ; i++)
    {
        // if ((height[i - 1] > height[i] && height[i + 1]) > height[i])
        // {
        //     int mini = min(height[i - 1], height[i + 1]);
            // trapped += mini - height[i];
        // }
        waterLevel=min(leftMaxBoundary[i],rightMaxBoundary[i]);
        trapped+=waterLevel-height[i];
    }
    cout<< trapped<<endl;
}

int main()
{
    // int height[]{4,2,0,6,3,2,5};
    int height[]{7,4,0,9};
    int n = sizeof(height) / sizeof(height[0]);

    calculatingRainwater(height, n);
    return 0;
}
