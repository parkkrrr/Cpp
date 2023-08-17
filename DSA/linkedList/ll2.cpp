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
        this->next = NULL;
    }
};

class LinkedList
{
    Node *head;

public:
    LinkedList() : head(NULL) {}

    void append(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
            head = newNode;
        else
        {
            Node *curr = head;
            while (curr->next != NULL)
                curr = curr->next;
            curr->next = newNode;
        }
    }

    void insertAtPosition(int data, int position)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            return;
        }

        if (position == 0)
        {
            newNode->next = head;
            head = newNode;
        }

        Node *curr = head;
        for (int i = 0; i <= position - 1 && curr->next != NULL; i++)
            curr = curr->next;

        newNode->next = curr->next;
        curr->next = newNode;
    }

    void insertAtStart(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }

    void print()
    {
        Node *curr = head;
        while (curr != NULL)
        {
            cout << curr->data;
            if (curr->next != NULL)
                cout << " -> ";
            curr = curr->next;
        }
    }

    void search(int item)
    {
        Node *curr = head;
        int counter{};
        while (curr->next != NULL)
        {
            if (curr->data == item)
            {
                cout << "Item Found at position : " << counter << endl;
                return;
            }
            curr = curr->next;
            counter++;
        }
        cout << "!ItemNotFound!" << endl;
    }

    void deleteAtHead(int data)
    {
        if (head == NULL)
            return;
        if (head->data==data){
        Node *temp = head;
        head = head->next;
        delete temp;
        }
        return;
    }
};

int main()
{
    LinkedList *list = new LinkedList();
    list->insertAtStart(46);
    list->append(7);
    list->append(9);
    list->append(33);
    list->append(5);
    list->insertAtPosition(2, 3);
    list->search(33);
    cout<<"Before deletion : ";
    list->print();
    cout<<endl<<"After Deletion : ";
    list->deleteAtHead(46);-
    list->print();

    return 0;
}