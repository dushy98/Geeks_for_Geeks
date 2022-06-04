#User function Template for python3

def nCr(n,r):
    #code here
    # base case nCn = 1 and nC0 = 1
    if n == r or r == 0:
        return 1
    
    
    return nCr(n-1,r-1) + nCr(n-1,r)

#{ 
#  Driver Code Starts
#Initial Template for Python 3

#contributed by RavinderSinghPB
if __name__ == '__main__':
    tcs=int(input())
    
    for _ in range(tcs):
        n,r=[int(x) for x in input().split()]
        
        print(nCr(n,r))
# } Driver Code Ends