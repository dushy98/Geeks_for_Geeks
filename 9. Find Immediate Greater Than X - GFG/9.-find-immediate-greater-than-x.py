#User function Template for python3

class Solution:
    # inf has been imported in driver code
    def immediateGreater(self,arr,n,x):
        #return required ans
        
        #code here
        closest = 10001
        for i in range(n):
            if arr[i] > x and arr[i] < closest:
                closest = arr[i]
        
        if closest == 10001:
            return -1
        else: 
            return closest

#{ 
#  Driver Code Starts
#Initial Template for Python 3

#contributed by RavinderSinghPB
if __name__ =='__main__':
    from math import inf
    tcs=int(input())
    
    for _ in range(tcs):
        n=int(input())
        arr=[int(e) for e in input().split()]
        x=int(input())
        
        ans=Solution().immediateGreater(arr,n,x)
        print(ans)
# } Driver Code Ends