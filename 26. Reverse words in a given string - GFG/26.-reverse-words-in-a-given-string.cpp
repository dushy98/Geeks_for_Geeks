// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) { 
        // code here 
        string s = "",temp = "";
        
        for (int i = (int)S.length()-1; i>-1; i--){
            if(S[i]!= '.') temp+= S[i];
            
            else{
                reverse(temp.begin(),temp.end());
                s += temp;
                s += '.';
                temp = "";
            }
        }
        reverse(temp.begin(),temp.end());
        s += temp;
        return s;
        
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends