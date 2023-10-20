#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(4, 10);
    v.emplace_back(100);
    // for (vector<int>::iterator i = v.begin(); i < v.end(); i++)
    //     cout << *(i);

    for(auto i:v)
        cout<<i;

    return 0;
}