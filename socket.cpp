#include <iostream>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <cstring>

#define PORT 8000

int main() {
    int sock = 0, valread;
    struct sockaddr_in serv_addr;
    char *hello = "Hello, server!";
    char buffer[1024] = {0};
    
    // Create a socket
    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        std::cout << "Socket creation error" << std::endl;
        return -1;
    }
    
    // Set server address and port
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORT);
    
    // Convert IPv4 and IPv6 addresses from text to binary form
    if (inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr) <= 0) {
        std::cout << "Invalid address or address not supported" << std::endl;
        return -1;
    }
    
    // Connect to server
    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) {
        std::cout << "Connection failed" << std::endl;
        return -1;
    }
    
    // Send message to server
    send(sock, hello, strlen(hello), 0);
    std::cout << "Message sent to server" << std::endl;
    
    // Receive message from server
    valread = read(sock, buffer, 1024);
    std::cout << "Message received from server: " << buffer << std::endl;
    
    // Close socket
    close(sock);
    return 0;
}
