// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // User function to complete
    // arr[]: input array
    // n: size of array
    // k: find element smaller and closest to it. 
    int immediateSmaller(int arr[], int n, int x)
    {
        // your code here
        int diff = -1;                 // default case if everything greater than x then -1 is returned  
        for(int i = 0; i < n; i++){
            if(x > arr[i] && arr[i] > diff){
                diff = arr[i];
            }  
        }
        return diff;
        
    }
};


// { Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    
            int n;
        	cin >> n;
        	
        	int arr[n];
        	
        	for(int i = 0;i<n;i++){
        	    cin >> arr[i];
        	}
        	
        	int x;
        	cin >> x;
        	Solution ob;
        	cout << ob.immediateSmaller(arr, n, x) << endl;
	}
	
	
	return 0;
}
  // } Driver Code Ends