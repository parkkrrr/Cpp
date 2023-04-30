#include <iostream>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <cstring>
#include <thread>
#include <vector>

#define PORT 8000

void handle_client(int client_socket) {
    char buffer[1024] = {0};
    int valread;
    
    // Receive message from client
    valread = read(client_socket, buffer, 1024);
    std::cout << "Message received from client: " << buffer << std::endl;
    
    // Send message to client
    char *message = "Hello, client!";
    send(client_socket, message, strlen(message), 0);
    std::cout << "Message sent to client" << std::endl;
    
    // Close client socket
    close(client_socket);
}

int main() {
    int server_socket, new_socket;
    struct sockaddr_in address;
    int addrlen = sizeof(address);
    
    // Create a server socket
    if ((server_socket = socket(AF_INET, SOCK_STREAM, 0)) == 0) {
        std::cout << "Socket creation error" << std::endl;
        return -1;
    }
    
    // Set server socket options
    int opt = 1;
    if (setsockopt(server_socket, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT, &opt, sizeof(opt))) {
        std::cout << "Socket options error" << std::endl;
        return -1;
    }
    
    // Set server address and port
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);
    
    // Bind the server socket to the address and port
    if (bind(server_socket, (struct sockaddr *)&address, sizeof(address)) < 0) {
        std::cout << "Socket bind error" << std::endl;
        return -1;
    }
    
    // Listen for incoming connections
    if (listen(server_socket, 3) < 0) {
        std::cout << "Socket listen error" << std::endl;
        return -1;
    }
    
    std::vector<std::thread> threads;
    
    while (true) {
        // Accept incoming connection
        if ((new_socket = accept(server_socket, (struct sockaddr *)&address, (socklen_t*)&addrlen)) < 0) {
            std::cout << "Socket accept error" << std::endl;
            return -1;
        }
        
        // Start a new thread to handle the client connection
        std::thread client_thread(handle_client, new_socket);
        threads.push_back(std::move(client_thread));
    }
    
    // Join all threads
    for (auto& t : threads) {
        t.join();
    }
    
    // Close server socket
    close(server_socket);
    return 0;
}
