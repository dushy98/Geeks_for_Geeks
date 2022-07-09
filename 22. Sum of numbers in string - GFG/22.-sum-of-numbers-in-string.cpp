// { Driver Code Starts
// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;


 // } Driver Code Ends

#include <bits/stdc++.h>
class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str){
    	// Your code here
    	int t = 0, sum = 0;
    	for (int i = str.length() - 1; i >= 0; i--){
    	    char ch = str[i];
    	    if(97 <= int(ch) & int(ch) <= 122){
    	        t = 0;
    	    }
    	    else{
    	        sum += pow(10,t)*(int(ch)-48);
    	        t++;
    	    }
    	}
    	return sum;
    	
    }
};

// { Driver Code Starts.

// Driver code
int main()
{
	// input alphanumeric string
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution obj;
	    cout << obj.findSum(str);
        cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends