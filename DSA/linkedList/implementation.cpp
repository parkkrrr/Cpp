#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    // Node(int data) : data(data), next(nullptr) {}

    Node(int data) {
        this->data = data;
        next=NULL; // initialize the pointer to NULL as initially there is no node after current one
    }
};

class LinkedList {
    private :
        Node *head;

    public:
        // LinkedList() : head(nullptr) {}
        LinkedList(){
            head=nullptr;
        }

        void append(int data){
            Node *new_node = new Node(data);
            if(head==nullptr)
                head=new_node;
            
            else{
                Node *current=head;
                while (current->next!=nullptr){
                    current=current->next;
                }
                current->next=new_node;
            }
        }

        void display(){
            Node *current=head;
            while(current != nullptr){
                cout << current->data << " ";
                current=current->next;
            }
            cout<<endl;
        }

        ~LinkedList() {
            Node *current=head;
            while(current != nullptr){
                Node *next=current-> next;
                delete current;
                current=next;
            }
        }
}

        