#User function Template for python3

class Solution:
    def isPalin(self,N):
        #code here
        n = str(N)
        
        if len(n) <= 1:
            return 1
        else:
            if n[0] == n[-1]:
                return self.isPalin(n[1:-1])
            else:
                return 0

#{ 
#  Driver Code Starts
#Initial Template for Python 3

#contributed by RavinderSinghPB
if __name__ == '__main__':
    tcs=int(input())
    
    for _ in range(tcs):
        n=int(input())
        obj = Solution()
        print(int(obj.isPalin(n)))
# } Driver Code Ends