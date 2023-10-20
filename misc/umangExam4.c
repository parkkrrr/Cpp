#include <stdio.h>
int linearSearch(___fill here____){
    int i;
    for(i=0;i<size;i++){
        if(__fill here___) ___fill here___;
    }
    return -1;
}

int main(){
    char arr[]= {'a','b','c','d','e'};
    int size=sizeof(arr)/sizeof(arr[0]);
    char key='c';

    int result= linearSearch(___fill here___);
    if(result==-1) printf("Element not found \n");
    else printf("Element found at index %d\n",result);
    return 0;
}