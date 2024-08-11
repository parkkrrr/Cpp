#include <iostream>
#include <ws2tcpip.h>

#pragma comment(lib,"ws2_32.lib")

using namespace std;

int main(){
   WSAData wsData;
   WORD ver=MAKEWORD(2,2);
   int wsOK=WSAStartup(ver,&wsData);
   if(wsOK) {
    cerr<<"Cant init winsock"<<endl;
    return 0;
   }
   

    return 0;
}