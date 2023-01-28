#include <bits/stdc++.h>
using namespace std;

string isPrime(int n)
{
    if (n == 1)
    {
        return "No";
    }
    if (n == 2)
    {
        return "Yes";
    }
    int flag = 0;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
        }
    }
    if (flag == 0)
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << isPrime(n) << endl;
    }
    return 0;
}
