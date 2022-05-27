// { Driver Code Starts
//Initial Template for C++
#include <iostream>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

//Complete this function
int getByIndex(int arr[],int n,int i)
{
    //Your code here
    // index-out-of-bound check
    if (i < n){
        return arr[i];  // index inbound hence return element at index
    }
    else return -1;     // else return -1
}


// { Driver Code Starts.

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
	    
	    int i;
	    cin>>i;
	    
	    
	    cout<<getByIndex(arr,n,i)<<endl;
	    
	}
	return 0;
}  // } Driver Code Ends