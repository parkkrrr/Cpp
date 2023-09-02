#include <iostream>
using namespace std;

int countBit(int n){
    int count {};
    while(n){
        n&=(n-1);
        count++;
    }
    return count;
}

int main(){
    cout<<countBit(15)<<endl;
    cout<<countBit(45)<<endl;
    cout<<countBit(13)<<endl;
    cout<<countBit(127)<<endl;

    return 0;
}