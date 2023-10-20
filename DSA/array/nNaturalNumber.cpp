#include <iostream>
using namespace std;

int sum(int n){
    return (n*(n+1))/2;
}

int main(){
    cout<<sum(10)<<endl;
    cout<<sum(6)<<endl;
    cout<<sum(3)<<endl;
    return 0;
}