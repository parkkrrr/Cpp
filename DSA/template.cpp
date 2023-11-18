#include <iostream>
using namespace std;

template <typename T, typename V>

class Pair {
    T x;
    V y;
public:
    void first(T data) {
        x = data;
    }
    void second(V data) {
        y = data;
    }
    T first() { return x; }
    V second() { return y; }
};

int main() {
    Pair<int, int> p;
    p.first(10);
    p.second(20);
    cout << p.first() << endl;
    cout << p.second() << endl;

    Pair<Pair<int, int>, float> p2;
    p2.second(20);
    p2.first(p);
    cout << p2.first().first() << endl;
    cout << p2.second() << endl;

    return 0;
}