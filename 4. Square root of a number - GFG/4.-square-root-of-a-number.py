#User function Template for python3


#Complete this function
class Solution:
    def floorSqrt(self, x): 
    #Your code here
        if x == 0 or x == 1:
            return x
        elif int(x**(1/2)) * int(x**(1/2)) == x:
            return int(x**(1/2))
        else:
            i, res = 1,1
            while res < x:
                i+=1
                res = i*i
            return (i-1)

#{ 
#  Driver Code Starts
#Initial Template for Python 3

import math



def main():
        T=int(input())
        while(T>0):
            
            x=int(input())
            
            print(Solution().floorSqrt(x))
            
            T-=1


if __name__ == "__main__":
    main()
# } Driver Code Ends