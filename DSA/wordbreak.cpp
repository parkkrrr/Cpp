#include <iostream>
using namespace std;

class Node {
public:
    Node* arr[26];
    bool eow;
    Node() {
        eow = false;
        for (int i = 0;i < 26;i++)
            arr[i] = NULL;
    }
};

Node* root = new Node();

void insert(string key) {
    Node* curr = root;
    for (auto c : key) {
        if (curr->arr[c - 'a'] == NULL) {
            Node* newNode = new Node();
            curr->arr[c - 'a'] = newNode;
        }
        curr = curr->arr[c - 'a'];
    }
    curr->eow = true;
}

bool search(string key) {
    Node* curr = root;
    for (auto c : key) {
        if (curr->arr[c - 'a'] == NULL)
            return false;
        curr = curr->arr[c - 'a'];
    }
    return true;
}

int main()
{
    string str = "PrakharisLimitless";
    string dict[] = { "Prakhar","Limitless" };
    for (auto x : dict) {
        insert(x);
    }
    

    return 0;
}