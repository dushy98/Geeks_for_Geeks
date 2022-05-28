#User function Template for python3

def reverseArray(arr,n):
    
    #code here
    for i in range(n//2):
        arr[i], arr[-i-1] = arr[-i-1], arr[i] 

#{ 
#  Driver Code Starts
#Initial Template for Python 3

#contributed by RavinderSinghPB
if __name__ == '__main__':
    tcs=int(input())
    
    for _ in range(tcs):
        n=int(input())
        arr=[int(x) for x in input().split()]
        
        reverseArray(arr,n)
        
        for e in arr:
            print(e,end=' ')
        print()
# } Driver Code Ends