#include <iostream>
using namespace std;


//datatype array_name[size]

int x[100];     //Allocate a memory 4*100=400bytes | memory blocks will contain garbage value

int a[100]={0}; //Init List | memory block will contain 0

int a[100]={1,2,3}; //first 3 blocks will be assigned values and rest are 0s

int a[]={1,2,3};    //size=3*4=12bytes

string fruits[4] = {"apple", "mango", "guava"}; //Array of "strings" | 2D array 