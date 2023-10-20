#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second < p2.second) return true;
    if (p1.second > p2.second) return false;
    if (p1.first > p2.first) return true;
    return false;
}

int main() {
    pair<int, int> p[] = { {1, 2},{6, 3},{1, 21},{3, 2} };
    sort(p, p+4, comp);

    for(auto i:p)
        cout<<i.first<<"  "<<i.second<<endl;

    return 0;
}