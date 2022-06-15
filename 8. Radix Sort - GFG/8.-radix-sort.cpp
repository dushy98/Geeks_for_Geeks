// { Driver Code Starts
//Initial Template for C++

#include  <bits/stdc++.h> 
using namespace std; 
  

 // } Driver Code Ends
//User function Template for C++

void radixSort(int arr[], int n) 
{ 
   // code here
   int maxi = 0;
   for(int i = 0; i<n; i++){
       maxi = max(arr[i], maxi);
   }
   int iterations = log10(maxi) + 1;
   int mod = 10;
   while (iterations--){
       map<int, vector<int>> values;
       for (int i = 0; i < n; i++){
           values[arr[i] % mod].push_back(arr[i]);
       }
       int i = 0;
       for (auto x: values){
           for (auto y : x.second){
               arr[i++] = y;
           }
       }
       mod *= 10;
   }
   
} 

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
  
        radixSort(arr, n); 
        
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        
        cout<<endl;
    }
    return 0; 
}   // } Driver Code Ends