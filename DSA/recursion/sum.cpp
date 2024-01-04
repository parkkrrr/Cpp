#include <iostream>

int sumN(int n){
    if(n>0)
        return n%10+sumN(n/10);
    return 0;
}

int sum=0;
void calc(int n){
    int rem;
    if(n>0){
        rem=n%10;
        sum=sum*10+rem;
        calc(n/10);
    }
}

int main(){
    // cout<<sum(308);
    calc(3002);
    std::cout<<sum<<std::endl;
}
