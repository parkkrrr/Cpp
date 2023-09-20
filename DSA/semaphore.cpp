#include <iostream>
#include <thread>
using namespace std;

void wait(int n)
{
    n--;
    if (n < 0)
    {
        // add to n blocklist; block();
    }
}

void signal(int n){
    n++;
    if(n<=0){
        //remove p from n blocklist; 
        //wakeup();
    }
}

int main()
{

    return 0;
}