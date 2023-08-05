#include <iostream>
using namespace std;

class LinkedList
{
public:
    class Node
    {
    public:
        int data;
        Node *next;

        Node(int data)
        {
            this->data = data;
            next = NULL;
        }
    };

private:
    Node *head;

public:
    LinkedList(){
        head=NULL;
    }

    void insertAtHead(int data)
    {
        Node *newNode = new Node(data);
        if(head==NULL){
            head=newNode;
            return;
        }
        newNode->next=head;
        head=newNode;
    }

    void print(){
        Node *current=head;
        while(current!=NULL){
            cout<<current->data<<"  ->  ";  
            current=current->next;         
        }
    }

    void insertAtEnd(int data){
        Node *newNode= new Node(data);
        if(head==NULL){
            head=newNode;
            return;
        }
        Node *current=head;
        while(current->next!=NULL){
            current=current->next;
        }
        current->next=newNode;
    }
};

int main()
{
    LinkedList *list=new LinkedList();
    list->insertAtHead(1);
    list->insertAtHead(3);
    list->insertAtHead(5);
    list->insertAtEnd(9);
    list->insertAtEnd(5);
    list->insertAtEnd(7);
    list->insertAtEnd(3);
    list->insertAtHead(7);
    list->print();
    return 0;
}