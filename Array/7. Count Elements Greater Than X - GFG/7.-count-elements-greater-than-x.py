#User function Template for python3

class Solution:
    def greaterThanX(self,arr,n,x):
        #return required result
        #code here
        count = 0
        for i in range(n):
            if arr[i] > x:
                count += 1
        return count
#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ =='__main__':
    tcs=int(input())
    
    for _ in range(tcs):
        n=int(input())
        arr=[int(e) for e in input().split()]
        x=int(input())
        ob=Solution()
        ans=ob.greaterThanX(arr,n,x)
        print(ans)
# } Driver Code Ends