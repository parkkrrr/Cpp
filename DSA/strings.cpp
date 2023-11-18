#include <iostream>
#include <string.h>
using namespace std;

string get_str(string s=""){
    string str;
    cin>>str;
    if(s!="")
        cout<<s;
    return str;
}

int main() {
    string strings[] = { "Prakhar", "Anant", "Aadhya", "Satyam", "Aryan", "Ayushi", "Umang" };
    string target = "Aadhya";
    string s=get_str("Hola: ");
    cout<< s<<"\n";
    if (strings[2] == target)
        std::cout << strings[2]<<std::endl;
    
    // if(strcmp(strings[2],target)==0)
    //     std::cout<<strings[2]<<std::endl;

    return 0;
}