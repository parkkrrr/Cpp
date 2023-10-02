#include <iostream>
using namespace std;

int main(){

    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    int *ptr0=&arr[0];
    int *ptr8=&arr[8];

    // cout<<"PTR0 -> "<<(unsigned int)ptr0<<endl;
    printf("PTR0 -> %u\n",ptr0);
    
    printf("PTR8 -> %u\n",ptr8);
    // cout<<"PTR8 -> "<<(unsigned int)ptr8<<endl;
    cout<<"Difference -> "<<ptr8-ptr0<<endl;

    system("pause");
    return 0;
}