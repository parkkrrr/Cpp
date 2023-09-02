#include <iostream>
using namespace std;

bool checkEvenOdd(int n)
{
    int calculate = (n >> 1) << 1;
    if (calculate == n)
        return 1;
    return 0;
}

int main()
{
    cout << checkEvenOdd(51) << endl;
    cout << checkEvenOdd(53) << endl;
    cout << checkEvenOdd(55) << endl;
    cout << checkEvenOdd(56) << endl;
    cout << checkEvenOdd(52) << endl;
    return 0;
}