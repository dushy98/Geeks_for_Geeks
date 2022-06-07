// { Driver Code Starts
//Initial Template for C++

// C program for implementation of Bubble sort
#include <stdio.h>

// swapping the elements
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    void swap(int &a, int &b){ // helper function for swapping
        int temp = a;
               a = b;
               b = temp;
    }
    //Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n){
        // Your code here  
        while(n >= 0){
            int i = 0;
            while(i < n - 1){
                if(arr[i+1] < arr[i]){
                    swap(arr[i], arr[i+1]);
                }
                i++;
            }
            n--;
        }
    }
};


// { Driver Code Starts.

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver program to test above functions
int main()
{
    int arr[1000],n,T,i;
  
    scanf("%d",&T);
    
    while(T--){
        
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      
    Solution ob;  
      
    ob.bubbleSort(arr, n);
    printArray(arr, n);
    }
    return 0;;
}  // } Driver Code Ends