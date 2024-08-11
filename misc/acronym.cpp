#include <iostream>
using namespace std;

string acronym(string str){
    string arr {};
    arr+=str[0];
    
    for(int i=0;i<str.size();i++){
        if(str[i]==' '&& i!=str.size()-1){
            arr+=str[i+1];
        }
    }
    return arr;
}

int main(){
    cout<<acronym("Prakhar Verma Kumar Pal");
    return 0;
}