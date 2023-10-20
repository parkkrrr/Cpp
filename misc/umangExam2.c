#include<stdio.h>
#include <stdlib.h>

int main(){
    int a,b,c;
    a=2*5-3;
    b=3*2-5;
    c=++a+b--;
    printf("%d %d %d\n",a,b,c);

    return 0;
}