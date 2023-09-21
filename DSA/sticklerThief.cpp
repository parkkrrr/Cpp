// Stickler the thief wants to loot money from a society having n houses in a single line. He is a weird person and follows a certain rule when looting the houses. According to the rule, he will never loot two consecutive houses. At the same time, he wants to maximize the amount he loots. The thief knows which house has what amount of money but is unable to come up with an optimal looting strategy. He asks for your help to find the maximum money he can get if he strictly follows the rule. ith house has a[i] amount of money present in it.

// Example 1:

// Input:
// n = 5
// a[] = {6,5,5,7,4}
// Output:
// 15
// Explanation:
// Maximum amount he can get by looting 1st, 3rd and 5th house. Which is 6+5+4=15.

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends
class Solution
{
public:
	// Function to find the maximum money the thief can get.
	int FindMaxSum(int arr[], int n)
	{
		int prev1, prev2 = 0;
		for (int i = 0; i < n; i++)
		{
			int curr = max(prev1, arr[i] + prev2);
			prev2 = prev1;
			prev1 = curr;
		}
		return prev1;
	}
};

//{ Driver Code Starts.
int main()
{
	// taking total testcases
	int t;
	cin >> t;
	while (t--)
	{
		// taking number of houses
		int n;
		cin >> n;
		int a[n];

		// inserting money of each house in the array
		for (int i = 0; i < n; ++i)
			cin >> a[i];
		Solution ob;
		// calling function FindMaxSum()
		cout << ob.FindMaxSum(a, n) << endl;
	}
	return 0;
}

// } Driver Code Ends

// int maxMoneyRobbed(vector<int> &nums)
// {
// 	int n = nums.size();

// 	if (n == 0)
// 		return 0;
// 	if (n == 1)
// 		return nums[0];

// 	vector<int> dp(n);

// 	dp[0] = nums[0];
// 	dp[1] = max(nums[0], nums[1]);

// 	for (int i = 2; i < n; i++)
// 	{
// 		dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
// 	}

// 	return dp[n - 1];
// }