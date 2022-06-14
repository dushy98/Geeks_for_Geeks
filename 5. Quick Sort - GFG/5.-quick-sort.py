#User function Template for python3

class Solution:
    #Function to sort a list using quick sort algorithm.
    def quickSort(self,arr,low,high):
        # code here
        while low < high:
            p = self.partition(arr, low, high)
            self.quickSort(arr, low, p)
            low = p + 1

    
    def partition(self,arr,low,high):
        # code here
        p = arr[low]
        i = low - 1
        j = high + 1
        
        while True:
            i += 1 
            while(arr[i] < p):
                i += 1
            
            j -= 1
            while(arr[j] > p):
                j -= 1
            
            if i >= j:
                return j
            arr[i], arr[j] = arr[j], arr[i]
      
        
    

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == "__main__":
    t=int(input())
    for i in range(t):
        n=int(input())
        arr=list(map(int,input().split()))
        Solution().quickSort(arr,0,n-1)
        for i in range(n):
            print(arr[i],end=" ")
        print()

# } Driver Code Ends