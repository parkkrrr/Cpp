#include <iostream>
using namespace std;

int setBit(int n, int i)
{
    return n | (1 << (i - 1));
}

int main()
{
cout<<setBit(14,1)<<endl;
cout<<setBit(15,2)<<endl;
cout<<setBit(23,3)<<endl;
cout<<setBit(53,4)<<endl;
cout<<setBit(96,5)<<endl;

    return 0;
}