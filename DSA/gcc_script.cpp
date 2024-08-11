#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    if (argc == 1)
        return 0;
    char* args = argv[1];
    string str = "g++ " + string(args) + ".cpp -o " + string(args) + ".out -fconcepts";
    const char* cmd = str.c_str();
    system(cmd);
    
   
    str= string(args)+".out";
    cmd=str.c_str();
    system(cmd);

    return 0;
}