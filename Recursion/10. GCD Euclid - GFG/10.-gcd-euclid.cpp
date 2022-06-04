// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        int GCD(int a,int b)
    {
        //Your code here
        if(a == b) return a;
        if(a%b==0) return b;
        if(b%a==0) return a;
        if(a>b) 
            return GCD(a%b,b);
        else
            return GCD(a,b%a);
    }
};

// { Driver Code Starts.
int main() {
	int T;
	cin>>T;
	while(T--) 
	{
	    int a,b;
	    cin>>a>>b;
	    Solution ob;
	    cout<<ob.GCD(a,b)<<endl;
	}
	return 0;
}  // } Driver Code Ends