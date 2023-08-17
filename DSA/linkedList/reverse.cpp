#include <iostream>
using namespace std;

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

class LinkedList
{
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }

    void append(int data)
    {
        Node *newnode = new Node(data);
        if (head == NULL)
        {
            head = newnode;
            return;
        }
        Node *curr = head;

        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = newnode;
    }

    void reverse(){
        Node *curr=head;
        Node *prev=NULL;
        Node *temp;
        while(curr!=NULL){
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        head=prev; //Revised
    }

    void print(){
        Node *curr=head;
        while(curr){
            cout<<curr->data<<"\t";
            curr=curr->next;
        }
    }
};

int main()
{
    LinkedList *list = new LinkedList();

    list->append(29);
    list->append(26);
    list->append(24);
    list->append(23);
    list->append(27);
    list->append(45);
    list->print();
    list->reverse();
    
    list->print();

    return 0;
}