#include <iostream>
using namespace std;

int clearBit(int n, int i){
    return n & (~(1<<i-1));
}

int main(){
    cout<<clearBit(13,4)<<endl;
    cout<<clearBit(16,2)<<endl;
    cout<<clearBit(63,5)<<endl;
    cout<<clearBit(127,7)<<endl;
    cout<<clearBit(15,4)<<endl;
    return 0;
}