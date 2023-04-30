#include <iostream>

using namespace std;

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

int main()
{
    Node *node;

    Node *newNode = (Node *)malloc(sizeof(Node));

    return 0;
}