//{ Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
//     vector<long long> printFibb(int n) 
//     {
//         if(n<0)
//             return {}; 
//         if(n==0)
//             return {1};
//         if(n==1)
//             return {1};
//         if(n==2)
//             return {1,1};
//         long first=1;
//         long second=1;
//         long next;
//         vector <long long> result;
        
//         result.push_back(first);
//         result.push_back(second);
//         for(int i=2; i<n; i++){
//                 next=first+second;
//                 first=second;
//                 second=next;
//                 result.push_back(next);
//         }
//         return result;
        
//     }
// };

vector<long long> printFibb(int n)
    {
        vector<long long> result;
        if (n <= 0)
            return result;

        long long first = 1;
        long long second = 1;
        result.push_back(first);

        if (n > 1)
        {
            result.push_back(second);
            for (int i = 2; i < n; i++)
            {
                long long next = first + second;
                first = second;
                second = next;
                result.push_back(next);
            }
        }

        return result;
    }
};

//{ Driver Code Starts.
int main()
 {
     //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking number of elements
        int n;
        cin>>n;
        Solution obj;
        //calling function printFibb()
        vector<long long> ans = obj.printFibb(n);
        
        //printing the elements of vector
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    }
	return 0;
}

// } Driver Code Ends