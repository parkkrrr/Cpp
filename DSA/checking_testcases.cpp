#include <bits/stdc++.h>
using namespace std;
#define FOR(a,b) for(int i=a;i<b;++i)

int main() {

    srand(time(NULL));
    // int c=10;
    int t, n;
    // while(c--){
    t = rand() % 10 + 1;
    while (t--) {
        n = rand() % 100 + 1;
        int arr[n];
        FOR(0, n)
            arr[i] = rand() % 1000;

        // auto sol = myfunc();
        // auto sol2 = correctfunc();
        // if (sol != sol2) {
        //     cout << n << endl;
        //     FOR(0, n)
        //         cout << arr[i] << " ";
        //     cout << endl;
        //     break;
        // }
    }
    // }

    return 0;
}