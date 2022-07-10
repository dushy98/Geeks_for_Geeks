// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src){     
  //Your code here 
  int i = 0, count = 1;
  string res = "";
  
  for ( ; i < src.length() - 1; i++){
    if(src[i] == src[i+1]){                   // if same character follows
        count++;                              // increase its count
    }  
    else{                                     // else reset the count to 1    
        res = res + src[i] + to_string(count);  // for the new character
        count = 1;
    }   
  }
  res += src[src.size()-1] + to_string(count);  
  return res;
}
  
 
 
