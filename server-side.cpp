#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <netinet/in.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <netdb.h>
#include <fstream>
#include <sstream>
#include <vector>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
    int server, client;
    struct sockaddr_in server_address, client_address;
    int client_address_len = sizeof(client_address);
    char buffer[1024];
    int img_size;

    server = socket(AF_INET, SOCK_STREAM, 0);
    if (server == -1) {
        cout << "Could not create socket." << endl;
        return 1;
    }
    cout << "Server waiting for image." << endl;

    memset(&server_address, '0', sizeof(server_address));
    server_address.sin_family = AF_INET;
    server_address.sin_addr.s_addr = htonl(INADDR_ANY);
    server_address.sin_port = htons(4000);

    if (bind(server, (struct sockaddr*)&server_address, sizeof(server_address)) < 0) {
        cout << "Bind failed." << endl;
        return 1;
    }

    if (listen(server, 1) < 0) {
        cout << "Listen failed." << endl;
        return 1;
    }

    client = accept(server, (struct sockaddr *)&client_address, (socklen_t*)&client_address_len);
    if (client < 0) {
        cout << "Accept failed." << endl;
        return 1;
    }

    cout << "Client connected." << endl;

    read(client, &img_size, sizeof(img_size));
    cout << "Image size: " << img_size/1024 << "KB" << endl;
    vector<char> data(img_size);
    read(client, data.data(), img_size);

    Mat img = imdecode(data, IMREAD_COLOR);

    namedWindow("Server", WINDOW_NORMAL);
    imshow("Server", img);
    waitKey(0);

    close(client);
    close(server);

    return 0;
}
