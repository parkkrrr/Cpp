#include <iostream>
#include <string>

// Define a simple hash function for string keys
unsigned int hashFunction(const std::string& key, int tableSize) {
    unsigned int hashValue = 0;
    for (char ch : key) {
        hashValue = hashValue * 31 + ch;
    }
    return hashValue % tableSize;
}

// Node structure for linked list
struct Node {
    std::string key;
    int value;
    Node* next;
    Node(const std::string& k, int v) : key(k), value(v), next(nullptr) {}
};

// Custom HashMap class
class HashMap {
private:
    int tableSize;
    Node** table;

public:
    HashMap(int size) : tableSize(size) {
        table = new Node*[tableSize]();
    }

    ~HashMap() {
        for (int i = 0; i < tableSize; ++i) {
            Node* current = table[i];
            while (current != nullptr) {
                Node* next = current->next;
                delete current;
                current = next;
            }
        }
        delete[] table;
    }

    void insert(const std::string& key, int value) {
        unsigned int index = hashFunction(key, tableSize);
        Node* newNode = new Node(key, value);
        if (table[index] == nullptr) {
            table[index] = newNode;
        } else {
            Node* current = table[index];
            while (current->next != nullptr) {
                if (current->key == key) {
                    current->value = value; // If key already exists, update the value
                    delete newNode;
                    return;
                }
                current = current->next;
            }
            current->next = newNode;
        }
    }

    bool get(const std::string& key, int& value) {
        unsigned int index = hashFunction(key, tableSize);
        Node* current = table[index];
        while (current != nullptr) {
            if (current->key == key) {
                value = current->value;
                return true;
            }
            current = current->next;
        }
        return false;
    }

    bool remove(const std::string& key) {
        unsigned int index = hashFunction(key, tableSize);
        Node* current = table[index];
        Node* prev = nullptr;
        while (current != nullptr) {
            if (current->key == key) {
                if (prev != nullptr) {
                    prev->next = current->next;
                } else {
                    table[index] = current->next;
                }
                delete current;
                return true;
            }
            prev = current;
            current = current->next;
        }
        return false;
    }
};

int main() {
    HashMap myHashMap(10);

    myHashMap.insert("Alice", 100);
    myHashMap.insert("Bob", 85);
    myHashMap.insert("Charlie", 92);

    int score;
    if (myHashMap.get("Bob", score)) {
        std::cout << "Bob's score: " << score << std::endl;
    }

    myHashMap.remove("Charlie");

    return 0;
}
