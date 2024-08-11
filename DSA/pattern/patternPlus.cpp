// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n=5;
   for (int rows=1;rows<=n*2;rows++){
     
       for(int cols=1;cols<5;cols++){
           if(rows!=n){
               cout<<" ";
           }
       }
       if(rows==n){
         cout<<string(n*2,'+');
       }
       else
       cout<<"+";
           
       cout<<endl;
   }

    return 0;
}