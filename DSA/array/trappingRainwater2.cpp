#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int trap(vector<int> &height)
    {
        int len = height.size();
        if (len < 2)
            return 0;
        int trapped{};
        vector<int> leftMax(len);
        vector<int> rightMax(len);

        leftMax[0] = height[0];
        rightMax[len - 1] = height[len - 1];

        for (int i = 1; i < len; i++)
            leftMax[i] = max(leftMax[i - 1], height[i]);
        for (int i = len - 2; i >= 0; i--)
            rightMax[i] = max(rightMax[i + 1], height[i]);

        for (int i = 0; i < len; i++)
        {
            int waterLevel = min(leftMax[i], rightMax[i]);
            trapped += waterLevel - height[i];
        }
        if (trapped >= 0)
            return trapped;
        return 0;
        // return trapped;
    }
};


int main() {
    Solution solution;

    // Test cases
    vector<int> height1 = {};
    cout << "Test case 1: " << solution.trap(height1) << endl; // Expected output: 0

    vector<int> height2 = {5};
    cout << "Test case 2: " << solution.trap(height2) << endl; // Expected output: 0

    vector<int> height3 = {1, 2, 3, 4, 5};
    cout << "Test case 3: " << solution.trap(height3) << endl; // Expected output: 0

    vector<int> height4 = {5, 4, 3, 2, 1};
    cout << "Test case 4: " << solution.trap(height4) << endl; // Expected output: 0

    vector<int> height5 = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << "Test case 5: " << solution.trap(height5) << endl; // Expected output: 6

    vector<int> height6 = {5, 1, 2, 3, 4, 5};
    cout << "Test case 6: " << solution.trap(height6) << endl; // Expected output: 10

    vector<int> height7 = {1, 2, 3, 4, 5, 1};
    cout << "Test case 7: " << solution.trap(height7) << endl; // Expected output: 0

    vector<int> height8 = {3, 3, 3, 3, 3};
    cout << "Test case 8: " << solution.trap(height8) << endl; // Expected output: 0

    // Large input test
    vector<int> height9(1000000, 1); // 1 million elements with height 1
    cout << "Test case 9: " << solution.trap(height9) << endl; // Expected output: 0

    return 0;
}
