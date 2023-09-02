#include <iostream>
using namespace std;

void hollowRhombus(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
            cout << " ";

        for (int k = 1; k <= n; k++)
            if (i == 1 || k == n || k == 1 || i == n)
                cout << "*";
            else
                cout << " ";

        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    hollowRhombus(n);
    return 0;
}