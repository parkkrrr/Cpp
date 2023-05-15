#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int count0 {};
   int count1 {};
   int count2 {};
   //   Write your code here
   for(int i=0; i<n; i++){
      if(arr[i]==0)
         count0++;
      if(arr[i]==1)
         count1++;
      if(arr[i]==2)
         count2++;
   }

   for(int i=0; i<count0; i++)
      arr[i]=0;
   for(int i=count0; i<count0+count1; i++)
      arr[i]=1;
   for(int i=count1+count0; i<count0+count1+count2; i++)
      arr[i]=2;
}