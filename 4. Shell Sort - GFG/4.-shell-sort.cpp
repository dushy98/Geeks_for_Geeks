// { Driver Code Starts
//Initial Template for C++

#include  <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
//User function Template for C++

void shellSort(int arr[], int n) 
{
    // code here 
    for(int gap = n/2; gap >=1; gap/=2){
        for(int j = gap; j < n; j++){
            for(int i = j - gap; i>=0; i-=gap){
                if(arr[i+gap] > arr[i]) break;
                else swap(arr[i],arr[i+gap]);
            }
        }
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
  
        shellSort(arr, n); 
        
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        
        cout<<endl;
    }
    return 0; 
}   // } Driver Code Ends