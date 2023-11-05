#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n=mat.size();
        int m=mat[0].size();
        int i=0;
        int j=(n*m)-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(mat[mid/m][mid%m]==target)
                return true;
            else if(mat[mid/m][mid%m]<target)
                i=mid+1;
            else
                j=mid-1;
        }
        return false;
}