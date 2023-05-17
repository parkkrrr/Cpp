#include <iostream>
using namespace std;

int main()
{
    char input[1000];
    char temp_buffer = cin.get();
    // int len {1};
    // int i {};

    // while(temp_buffer!='\n'){
    //     len++;
    //     input[i]=temp_buffer;
    //     temp_buffer=cin.get();
    //     i++;
    // }

    int len{};
    while (temp_buffer != '\n')
    {
        input[len++] = temp_buffer;
        temp_buffer = cin.get();
    }
    
    input[len]='\0';
    cout << input << endl;
    cout << "Length: " << len << endl;

    return 0;
}