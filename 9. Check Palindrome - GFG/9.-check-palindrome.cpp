// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    int rev = 0, rem;
    int reverse(int N){
        if(N){
        rem = N % 10;
        rev = rev*10 + rem;
        reverse(N/10);
        }
        return rev;
    }
  
    bool isPalin(int N)
    {
        //Your code here
        //You may use a helper function if you like
        if (N<10){
            return 1;
        }
        return N == reverse(N);
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
	    Solution obj;
	    cout<<obj.isPalin(N)<<endl;
	}
	return 0;
}  // } Driver Code Ends