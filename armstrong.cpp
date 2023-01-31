#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string armstrongNumber(int n)
    {
        int rem, arm = 0, temp = n;
        while (n != 0)
        {
            rem = n % 10;
            arm += rem * rem * rem;
            n /= 10;
        }

        if (temp == arm)
        {
            return "Yes";
        }
        else
        {
            return "No";
        }
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}
