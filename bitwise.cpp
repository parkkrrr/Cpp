/**
 * Given three positive integers a, b and c. Your task is to perform some bitwise operations on them as given below:
 * 1. d = a ^ a
 * 2. e = c ^ b
 * 3. f = a & b
 * 4. g = c | (a ^ a)
 * 5. h = ~e
 * Note: ^ is for xor.
*/

#include <iostream>
using namespace std;

void bitWiseOperation(int, int, int);

void bitWiseOperation(int a, int b, int c)
{
    cout << (a ^ a) << endl;
    cout << (c ^ b) << endl;
    cout << (a & b) << endl;
    cout << (c | (a ^ a)) << endl;
    cout << ~(c ^ b) << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        bitWiseOperation(a, b, c);
    }

    return 0;
}
// } Driver Code Ends