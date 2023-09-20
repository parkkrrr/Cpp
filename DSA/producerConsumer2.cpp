#include <iostream>
#include <semaphore.h>
#include <thread>
using namespace std;

sem_t EMPTY, filled, mutex;
void producer(int)
{
    do
    {
        sem_wait(EMPTY);
        sem_wait(mutex);



    } while (true);
}

void consumer(int)
{
}

int main()
{

    return 0;
}