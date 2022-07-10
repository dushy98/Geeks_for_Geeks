#Your task is to complete this function
#Function should return complete string
def encode(arr):
    # Code here
    count = 1
    res = ""
    
    for i in range(len(arr)-1):
        if arr[i] == arr[i+1]:
            count += 1
        else:
            res += str(arr[i]) + str(count)
            count = 1
    
    res += arr[len(arr)-1] + str(count)
    return res
    

#{ 
#  Driver Code Starts
#Your code will prepended here
if __name__=='__main__':
    t=int(input())
    for i in range(t):
        arr=input().strip()
        print (encode(arr))
# } Driver Code Ends