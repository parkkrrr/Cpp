/**
 * For a given 3 digit number, find whether it is armstrong number or not. 
 * An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to the number itself. 
 * Return "Yes" if it is a armstrong number else return "No".
 * NOTE: 371 is an Armstrong number since 33 + 73 + 13 = 371
*/

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
