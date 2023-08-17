#include <iostream>
using namespace std;
#define size 10

class Stack
{
    int top;
    int n[size];

public:
    Stack()
    {
        top = -1;
    }

    int push(int data)
    {
        // if (top == (size-1))
        if(isFull())
           return -1;
           
        top++; 
        n[top]=data;
        return data;
    }

    int pop() {
        if(isEmpty())
            return -1;
        top--;
        return top;
    }

    void peek(int) {}

    void count() {}

    void change() {}

    void display();

    int isEmpty();

    int isFull();
};

int main()
{

    return 0;
}

int Stack::isEmpty(){
    if(top==-1)
        return 1;
    return 0;
}

int Stack::isFull(){
    if(top==(size-1))
        return 1;
    return 0;
}

void Stack::display(){
    for(int i=top; i>=0; i--)
        cout<<n[i]<<endl;
}

