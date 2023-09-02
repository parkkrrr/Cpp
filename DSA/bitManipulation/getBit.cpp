#include <iostream>
using namespace std;

bool getBit(int n, int i){
    return n & (1<<(i-1));  
}

int main(){
    cout<<getBit(5, 2)<<endl;
    cout<<getBit(54, 6)<<endl;
    cout<<getBit(15, 3)<<endl;
    cout<<getBit(13, 6)<<endl;
    cout<<getBit(25, 4)<<endl;
    return 0;
}