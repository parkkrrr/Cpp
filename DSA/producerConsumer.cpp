#include <iostream>
#include <thread>
#include <vector>
#include <queue>
#include <semaphore.h>

const int BUFFER_SIZE = 5;
std::queue<int> buffer;
sem_t empty_slots, full_slots, mutex;

// Producer function
void producer(int id) {
    for (int i = 0; i < 10; ++i) {
        // Wait for an empty slot in the buffer
        sem_wait(&empty_slots);
        
        // Acquire the mutex to access the buffer
        sem_wait(&mutex);
        
        // Produce an item (in this case, a random integer)
        int item = rand() % 100;
        buffer.push(item);
        std::cout << "Producer " << id << " produced item " << item << std::endl;
        
        // Release the mutex
        sem_post(&mutex);
        
        // Signal that a slot in the buffer is now full
        sem_post(&full_slots);
        
        // Simulate some delay (in milliseconds)
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

// Consumer function
void consumer(int id) {
    for (int i = 0; i < 10; ++i) {
        // Wait for a full slot in the buffer
        sem_wait(&full_slots);
        
        // Acquire the mutex to access the buffer
        sem_wait(&mutex);
        
        // Consume an item from the buffer
        int item = buffer.front();
        buffer.pop();
        std::cout << "Consumer " << id << " consumed item " << item << std::endl;
        
        // Release the mutex
        sem_post(&mutex);
        
        // Signal that a slot in the buffer is now empty
        sem_post(&empty_slots);
        
        // Simulate some delay (in milliseconds)
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    }
}

int main() {
    // Initialize semaphores
    sem_init(&empty_slots, 0, BUFFER_SIZE);
    sem_init(&full_slots, 0, 0);
    sem_init(&mutex, 0, 1);

    std::vector<std::thread> producers;
    std::vector<std::thread> consumers;

    // Create producer and consumer threads
    for (int i = 0; i < 3; ++i) {
        producers.push_back(std::thread(producer, i));
        consumers.push_back(std::thread(consumer, i));
    }

    // Join producer threads and consumer threads
    for (int i = 0; i < 3; ++i) {
        producers[i].join();
        consumers[i].join();
    }

    // Destroy semaphores
    sem_destroy(&empty_slots);
    sem_destroy(&full_slots);
    sem_destroy(&mutex);

    return 0;
}
