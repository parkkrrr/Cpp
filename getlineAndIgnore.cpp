//{ Driver Code Starts
// Initial Template for C++

#include <iostream>
using namespace std;

// Function prototype
void getLineAndIgnore();

// } Driver Code Ends
// User function Template for C++

// Back-end complete function Template for C++

// Function to take input of string using getline
void getLineAndIgnore()
{

    string a, d;
    int b;
    /**
     * whenever if we input string value after integer type value then the string values will get buffered as result we shall not not get desired output.

     * To tackle this problem we need to use  either

     * "cin.ignore()" or "cin>>ws".  just before getline(cin,d).

     * "the string values stored in buffered will get flushed out on the output screen as a result we get the desired output.
    **/

    getline(cin, a);

    cin >> b;
    cin.ignore();
    getline(cin, d);

    cout << a << endl;

    cout << b << endl;

    cout << d << endl;
}

//{ Driver Code Starts.

// Driver Code
int main()
{
    // Number of testcase input
    int t;
    cin >> t;
    cin.ignore(); // Ignoring the newline so it isn't consumed by getline. Read about it!!
    while (t--)
    {
        getLineAndIgnore();
    }

    return 0;
}
// } Driver Code Ends