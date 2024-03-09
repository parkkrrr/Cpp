#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) :data(data), next(nullptr) {}
};

void deleteHead(Node* &head) {
    if (!head) return;
    Node *temp = head;
    head = head->next;
    delete(temp);
}

void print(Node *head){
    Node *curr =head;
    while(curr){
        cout<<curr->data<<endl;
        curr=curr->next;
    }
}

int main() {
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    head->next = second;
    second->next = third;

    print(head);
    deleteHead(head);
    print(head);
    return 0;
}