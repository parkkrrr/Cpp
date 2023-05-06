#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n,sumEven=0, sumOdd=0,rem;
    cin>>n;

    while(n!=0){
        rem=n%10;
        n/=10;
        if(rem%2==0)
            sumEven+=rem;
        else
            sumOdd+=rem;
    }

    cout<< sumEven << " " << sumOdd;
    return 0;
}
