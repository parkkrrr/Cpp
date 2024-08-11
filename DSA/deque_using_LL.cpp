#include <iostream>
using namespace std;

class Node {
public:
    Node* prev;
    int data;
    Node* next;

    Node(int data) {
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};

class LL{
    Node *head;
    Node *tail;
    public:
    LL(){
        head=nullptr;
        tail=nullptr;
    }
    void insert(int data){
        Node *temp= new Node(data);
        if(!head){
            head=temp;
            tail=temp;
            cout<<"Inserted Successfully!";
            return;
        }
        temp->prev=tail;
        tail->next=temp;
        tail=temp;
    }

    void remove(int data){
        Node *temp= new Node(data);
        if(!head->next){
            head=NULL;
            cout<<"Remove Successfully!";
        }
        temp->prev=tail;
        tail->next
    }
};