#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long int reverse_digit(long long int n)
    {
        long rem, rev = 0;

        while (n > 0)
        {
            rem = n % 10;
            rev = rev * 10 + rem;
            n /= 10;
        }
        return rev;
    }
};

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long int n;
        cin >> n;
        Solution ob;
        long long int ans = ob.reverse_digit(n);
        cout << ans << "\n";
    }
    return 0;
}