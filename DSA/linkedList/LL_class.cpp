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

    void insertion(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *currentNode = head;
            while (currentNode != NULL){
                currentNode=currentNode->next;
            }
            currentNode->next=newNode;
        }
    }

    void printLL(){
        Node *current=head;
        while(current!=NULL){
            cout<<current->data<<endl;
            cout<<current<<endl;
        }
    }
};

int main()
{
LinkedList *student = new LinkedList();
student->insertion(1);
student->insertion(4);
student->insertion(5);
student->insertion(6);
student->printLL();


    return 0;
}