#include <bits/stdc++.h>
using namespace std;

int main() {

    int c = 2;

    srand(time(NULL));
    while (c--) {
        int t = rand() % 5 + 1;
        cout << t << endl;

        while (t--) {
            int N = rand() % 10 + 1;

            cout << N << endl;
            for (int i = 0;i < N;i++)
                cout << rand() % 50 << " ";
            cout << endl;
        }
    }

    return 0;
}