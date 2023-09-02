#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data) : data(data), next(nullptr) {}
};

class LinkedList
{
    Node *head;

public:
    LinkedList()
    {
        head = nullptr;
    }

    void appendAtStart(int data)
    {
        Node *newNode = new Node(data);
        if(!head){
            head=newNode;
            return;
        }
        
        newNode->next=head;
        head=newNode;
    }

    void print(){
        Node *current=head;
        while(current){
            cout<<current->data;
            current=current->next;
        }
    }
    void reverse(){
        Node *curr=head;
        Node *prev=nullptr;
        Node *temp;

        while(curr!=nullptr){
            temp=curr->next;
            // curr->next=prev;
            // prev=curr;
            // curr=temp;
        }
        // head=prev;
    }
    
};

int main()
{

    return 0;
}

//idea is that swap the Nodes and increment curr, prev, next variables.