
#User function Template for python3

class Solution:
    
    #Function to calculate sum of all numbers present in a string.
    def findSum(self,s):
        #code here
        x = 0
        y = ''
        n = ['1', '2', '3', '4', '5', '6', '7', '8', '9', '0']
        
        for i in range(len(s)):
            if s[i] in n:
                if s[i-1] not in n and i>0:
                    y = ''
                if i < len(s) - 1 and s[i+1] in n:
                    y += s[i]
                else:
                    y += s[i]
                    x += int(y)
        return x
        


#{ 
#  Driver Code Starts
#Initial Template for Python 3

import atexit
import io
import sys

_INPUT_LINES = sys.stdin.read().splitlines()
input = iter(_INPUT_LINES).__next__
_OUTPUT_BUFFER = io.StringIO()
sys.stdout = _OUTPUT_BUFFER

@atexit.register

def write():
    sys.__stdout__.write(_OUTPUT_BUFFER.getvalue())

if __name__=='__main__':
    t = int(input())
    for i in range(t):
        s=str(input())
        obj = Solution()
        print(obj.findSum(s))
# } Driver Code Ends