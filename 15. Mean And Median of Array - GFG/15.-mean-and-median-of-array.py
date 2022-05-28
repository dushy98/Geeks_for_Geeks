#{ 
#Driver Code Starts
#Initial Template for Python 3


import math



 # } Driver Code Ends
#User function Template for python3

class Solution:
    ##Complete the below codes
    #Function to find median of the array elements.
    def median(self,A,N):
        
        A.sort()
        
        ##Your code here
        #If median is fraction then convert the median to integer and return
     
    #Function to find mean of the array elements.   
    def mean(self,A,N):
        ##Your code here

#{ 
#Driver Code Starts.
    
def main():
    
    T=int(input())
    
    while(T>0):
        
        N=int(input())
        a=[int(x) for x in input().strip().split()]
        ob=Solution()
        print(ob.mean(a,N),ob.median(a,N))
        
        T-=1
    
    




if __name__=="__main__":
    main()
#} Driver Code Ends