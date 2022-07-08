// { Driver Code Starts
//Initial Template for C++

// CPP code to find largest and 
// second largest element in the array

#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
     

class Solution{
  public:
    /* Function to find largest and second largest element
    *sizeOfArray : number of elements in the array
    * arr = input array
    */
    vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
        
        
        /*********************************
         * Your code here
         * This function should return a
         * vector with first element as
         * max and second element as 
         * second max
         * *******************************/
         
         int max_1 = 0, max_2 = -1;
         
         for (int i = 0; i<sizeOfArray; i++){
             if(arr[max_1] < arr[i]){
                 max_2 = max_1;
                 max_1 = i;
             }
             
             else if(arr[i] < arr[max_1]){
                 if(max_2 == -1 || arr[max_2] < arr[i]){
                     max_2 = i;
                 }
             }
         }
         
         int firstMax,secondMax;
         if(max_2 == -1){
             firstMax = arr[max_1];
             secondMax = -1;
         }
         
         else{
             firstMax = arr[max_1];
             secondMax = arr[max_2];
         }
         
         vector <int> ans;
         ans.push_back(firstMax);
         ans.push_back(secondMax);
         
         return ans;
    } 
};

// { Driver Code Starts.

// Driver Code
int main() {
	
	// Testcase input
	int testcases;
	cin >> testcases;
    
    // Looping through all testcases
	while(testcases--){
	    int sizeOfArray;
	    cin >> sizeOfArray;
	    
	    int arr[sizeOfArray];
	    
	    // Array input
	    for(int index = 0; index < sizeOfArray; index++){
	        cin >> arr[index];
	    }
	    Solution obj;
	    vector<int> ans = obj.largestAndSecondLargest(sizeOfArray, arr);
	    cout<<ans[0]<<' '<<ans[1]<<endl;
	}
	
	return 0;
}  // } Driver Code Ends