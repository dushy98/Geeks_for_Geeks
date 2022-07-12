#User function Template for python3

class Solution:
    def reverseArray(self,n,arr):
        #code here
        for i in range(n//2):
            arr[i],arr[-(1+i)] = arr[-(1+i)],arr[i]

#{ 
#  Driver Code Starts
#Initial Template for Python 3

#contributed by RavinderSinghPB
if __name__=='__main__':
    tcs=int(input())

    for _ in range(tcs):
        n=int(input())
        arr=[int(x) for x in input().split()]

        Solution().reverseArray(n, arr)

        for e in arr:
            print(e,end=' ')
        print()
# } Driver Code Ends