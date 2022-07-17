// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function Template for C++

//Complete this function
class Solution{
  public:
    void reverseArray(int n, int* arr){
        
      //Your code here
      stack<int> st;
      for(int i = 0; i<n; i++){
          st.push(arr[i]);
      }
      
      //Reverse the array
      int i = 0;
      while(!st.empty()){
          arr[i] = st.top();
          st.pop();
          i++;
      }
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    Solution obj;
    obj.reverseArray(n, arr);
    
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
    
    cout << endl;
    }
    return 0;
}  // } Driver Code Ends