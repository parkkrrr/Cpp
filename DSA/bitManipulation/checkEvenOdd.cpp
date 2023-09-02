#include <iostream>
using namespace std;

bool checkEvenOdd(int n){
    return !(n&1);
}

int main(){
    cout<<checkEvenOdd(59)<<endl;
    cout<<checkEvenOdd(54)<<endl;
    cout<<checkEvenOdd(50)<<endl;
    cout<<checkEvenOdd(51)<<endl;
    cout<<checkEvenOdd(52)<<endl;
    return 0;
}