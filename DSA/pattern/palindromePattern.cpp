#include <iostream>
using namespace std;

void palindromic(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
            cout << " ";
        
        for (int k = i; k > 0; k--)
            cout << k;
        for (int k = 2; k <= i; k++)
            cout << k;
            
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    palindromic(n);
    return 0;
}