// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

// Function to count number of Ones
// arr: input array 
// N: size of input array
int countOnes(int arr[], int N){
    //Your code here
    int count = 0;
    for (int i = 0; i < N; i++){
        if( arr[i] == 1){
            count++;
        }
        else if(arr[i] == 0){
            break;
        }
    }
    return count;
}

// { Driver Code Starts.

int main(){
    
    int t;
	scanf("%d", &t);
	while (t--)
	{
		int n;
		scanf("%d", &n);
		int *a;
		a = (int*)malloc(n * sizeof(int));
		for (int i = 0; i < n; ++i)
			scanf("%d", &a[i]);

		printf("%d\n", countOnes(a, n) );
	}
	return 0;
	
}
  // } Driver Code Ends