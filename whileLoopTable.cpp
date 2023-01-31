#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void printTable(int n)
    {
        int multiplier = 10;

        while (multiplier)
        {
            cout << n * multiplier << " ";
            multiplier--;
        }
        cout << endl;
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
        Solution obj;
        obj.printTable(n);
    }
    return 0;
}