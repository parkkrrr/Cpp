#include <iostream>
#include <sstream>
using namespace std;

string acronym(string str) {
    stringstream ss(str);
    string word;
    string arr;

    while (ss >> word) {
        if (!ss.eof()) { 
            arr += word[0]; 
        }
    }

    return arr;
}

int main() {
    cout << acronym("Prakhar Verma Kumar") << " Kumar" << endl;
    return 0;
}
