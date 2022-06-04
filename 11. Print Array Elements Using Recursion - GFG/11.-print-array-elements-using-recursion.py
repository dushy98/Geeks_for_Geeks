#User function Template for python3

class Solution:
    def printArrayRecursively(self,arr,n):
        #code here
        
        if n == 0:
            return
        
        self.printArrayRecursively(arr, n-1)
        print(arr[n-1], end = " ")
#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    tcs = int(input())
    
    for _ in range(tcs):
        n=int(input())
        arr=[int(x) for x in input().split()]
        ob=Solution()
        ob.printArrayRecursively(arr,n)
        print()
# } Driver Code Ends