// { Driver Code Starts
//Initial Template for C

#include<stdio.h>


 // } Driver Code Ends
//User function Template for C

// arr[]: input array
// n: size of array
// x: element for which you need to find smaller than x
int smallerThanX(int arr[], int n, int x)
{
    // your code here
    int count = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] < x){
            count ++;
        }
    }
    return count;
}

// { Driver Code Starts.

int main() {
	int T;
	scanf("%d", &T);
	while(T--) 
	{
	    int N;
	    scanf("%d", &N);
	    int arr[N];
	    for(int i=0;i<N;i++)
	        scanf("%d", &arr[i]);
	    int x;
	    scanf("%d", &x);
	    printf("%d", smallerThanX(arr,N,x));
	    printf("\n");
	}
	return 0;
}  // } Driver Code Ends