#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
    Node(int data){
        this->data=data;
        next=nullptr;
    }
};

int main(){
    int arr[]={1,2,3,4,5};
    // struct Node node=Node(24);
    // struct Node *_node=&node;
    // cout<< node.data<<endl;
    // cout<<_node->data<<endl;

    struct Node *node= new Node(24);
    cout<<node;
    cout<<(*node).data;
    free(node);
    cout<<node->data;
    
    return 0;
}