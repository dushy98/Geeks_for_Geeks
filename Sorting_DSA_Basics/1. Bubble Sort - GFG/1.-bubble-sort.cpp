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

class Solution{
    public:
    void swap(int &a, int &b){ // helper function for swapping
        int temp = a;
               a = b;
               b = temp;
    }
    //Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n){
        // Optimised Bubble sort for best case of O(n) when there are no swaps at all in the pass
        int swapped = 1;
        for (int pass = n-1; pass >=0 && swapped; pass--){
            swapped = 0;
            for (int j = 0; j <= pass-1; j++){
                if(arr[j] > arr[j+1]){
                    swap(arr[j], arr[j+1]);
                    swapped = 1;
                }
            
            }
            if (swapped == 0){
                break;
            }
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