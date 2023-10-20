#include<stdio.h>
#include<stdlib.h>
struct Employee{
    int id;
    char name[20];
    float salary;
};
int main(){
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee* empArray;
     empArray= ___fill here___;

     if(empArray==NULL){
        printf("Memory allocation failed\n");
        return 0;
     }
     free(empArray);
     return 0;
}
