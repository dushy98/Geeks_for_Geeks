// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
#define RANGE 255


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Function to arrange all letters of a string in lexicographical 
    //order using Counting Sort.
    string countSort(string arr){
        // code here
        int n = arr.size();
        int freq[26] = {0};
        for(int i = 0; i < n; i++){
            freq[arr[i] - 'a']++;
        }
        for(int i=1; i < 26; i++){
            freq[i] += freq[i-1];
        }
        
        vector<char> v(n);
        for(int i = n-1; i>=0; i--){
            v[-- freq[arr[i] - 'a']] = arr[i];
        }
        for(int i = 0; i<n; i++){
            arr[i] = v[i];
        }
        return arr;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string arr;
        cin>>arr;
        Solution obj;
        cout<<obj.countSort(arr)<<endl;
    }
    return 0;
}
  // } Driver Code Ends