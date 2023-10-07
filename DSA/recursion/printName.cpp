#include <iostream>
using namespace std;
void print(string s,int n){
    
    if(n==0)
        return;
        cout<<s;
    print(s,n-1);
}

int main(){
  
    print("Prakhar\n",5);
    return 0;
}