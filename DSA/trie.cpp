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

void insert(Node* root, string& key) {
    Node* curr = root;
    for (auto i : key) {
        if (!(curr->arr[i - 'a'])) {
            Node* newNode = new Node();
            curr->arr[i - 'a'] = newNode;
        }
        curr = curr->arr[i - 'a'];
    }
    curr->eow = true;
}

bool search(Node* root, string key) {
    // Node *curr=root;
    for (auto c : key) {
        if (root->arr[c - 'a'] == NULL)
            return false;
        root = root->arr[c - 'a'];
        cout << c;
    }
    cout << endl;
    return root->eow;
}

int main() {
    string arr[] = { "prakhar","pra","hello","hola" };

    Node* root = new Node();
    for (string x : arr)
        insert(root, x);
    cout << search(root, "prakher");

    return 0;
}