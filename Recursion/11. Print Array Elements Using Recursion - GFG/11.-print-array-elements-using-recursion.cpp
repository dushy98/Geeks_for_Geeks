// { Driver Code Starts
#include <iostream>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        void printArrayRecursively(int arr[],int n)
    {
       //Your code here
       //Use recursion to print array elements from start to end
       if (n == 0) return;  //base case
       
       
       printArrayRecursively(arr, n-1); // recusive call
       cout << arr[n-1]<<" ";           // print
      
       
    }
};


// { Driver Code Starts.
int main() {
	int T;
	cin>>T;
	while(T--) 
	{
	    int N;
	    cin>>N;
	    int arr[N];
	    for(int i=0;i<N;i++)
	    cin>>arr[i];
	    Solution ob;
	    ob.printArrayRecursively(arr,N);
	    cout<<endl;
	}
	return 0;
}  // } Driver Code Ends