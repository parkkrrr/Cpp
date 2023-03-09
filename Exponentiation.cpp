#include<bits/stdc++.h> 
using namespace std; 
#define mod 1000000007

class Solution{   
public:
    long long int power(long long int a, long long int b) { 
        long long int ans=1;
        while(b>0){
            if(b&1) ans=(ans*a)%mod;
            a=(a*a)%mod;
            b=b>>1;
        }
        return ans;
    }
};


int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        long long b;
        cin >> a >> b;
        Solution ob;
        cout << ob.power(a, b) << endl;
    
    }
    return 0; 
} 

