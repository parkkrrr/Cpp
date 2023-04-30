#include <iostream>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>

#define PORT 8000

int main() {
    int server_socket;
    struct sockaddr_in address;
    int addrlen = sizeof(address);
    
    // Create a server socket
    if ((server_socket = socket(AF_INET, SOCK_STREAM, 0)) == 0) {
        std::cout << "Socket creation error" << std::endl;
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
    
    // Accept incoming connection
    int new_socket;
    if ((new_socket = accept(server_socket, (struct sockaddr *)&address, (socklen_t*)&addrlen)) < 0) {
        std::cout << "Socket accept error" << std::endl;
        return -1;
    }
    
    // Close client socket
    close(new_socket);
    
    // Close server socket
    close(server_socket);
    return 0;
}
