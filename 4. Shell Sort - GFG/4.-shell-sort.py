#User function Template for python3

def shellSort(arr, n):
    # code here
    gap = n//2
    while gap>0:
        for i in range(gap,n):
            x = arr[i]
            j = i
            while j>= gap and x<arr[j-gap]:
                arr[j] = arr[j-gap]
                j = j - gap
            arr[j] = x
        gap = gap//2
    return arr    

#{ 
#  Driver Code Starts
#Initial Template for Python 3


if __name__ == "__main__":
    t = int(input())
    while(t>0):
        n = int(input())
        arr = [int(x) for x in input().strip().split()]
        shellSort(arr, n)
        for ele in arr:
            print(ele, end=" ")
        print()
        t=t-1

# } Driver Code Ends