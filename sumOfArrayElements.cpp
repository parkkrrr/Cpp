#include <bits/stdc++.h>
using namespace std;

int sumElement(int arr[],int n)
{
    int sum=0;
    
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    return sum;
   
}



int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    
	    cout<<sumElement(arr,n)<<endl;
	    
	}
	return 0;
}
// } Driver Code Ends