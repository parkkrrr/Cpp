#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int times=floor(arr.size()/3);
    vector<int> res;
    for(int x=0;x<arr.size();x++){
        if (count(arr.begin(), arr.end(), arr[x])>times){
            res.push_back(arr[x]);
        }
    }
    sort(res.begin(),res.end());
    res.erase(unique(res.begin(),res.end()),res.end());
    return res;
}

int main(){
    // vector<int> arr={3, 2, 2, 1, 5, 2, 3};
    vector<int> arr={7, 4, 4, 9, 7};

    vector<int> res = majorityElementII(arr);
    for(auto x:res)
        cout<<res[x];
    return 0;
}