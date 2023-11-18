#include <bits/stdc++.h>
using namespace std;

class Stack {
    int top;
    // int s=5;
    int n[5];
public:
    Stack() {
        top = -1;
        // cin >> s;
    }

    void push(int data) {
        ++top;
        n[top] = data;
    }
    void pop() {
        --top;
    }
    void size() {
        cout << top+1 << endl;
    }
    void display() {
        cout << n[top] << endl;
    }

};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.pop();
    s.push(30);
    s.push(40);
    s.push(50);
    s.pop();
    s.size();
    s.display();

    return 0;
}