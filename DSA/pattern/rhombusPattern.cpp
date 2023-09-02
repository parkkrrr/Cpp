#include <iostream>
using namespace std;

void rhombus(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int k=1; k<=n;k++){
            cout<< "*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    rhombus(n);
    return 0;
}