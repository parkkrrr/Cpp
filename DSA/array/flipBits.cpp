#include <bits/stdc++.h>
int flipBits(int *arr, int n) {
  int cs{};
  int ls{};
  int count{};

  for (int i = 0; i < n; i++) {
    if (arr[i] == 1) {
      arr[i] = -1;
      count++;
    }
    else
        arr[i]=1;
    
  }
  for(int i=0; i<n; i++){
      cs+=arr[i];
      if(cs<0)
        cs=0;
        ls=std::max(ls,cs);
  }
  return count+ls;
}