#User function Template for python3

class Solution:
    '''You need to insert the given element at the given index. 
    After inserting the elements at index, elements
    from index onward should be shifted one position ahead
     You may assume that the array already has sizeOfArray - 1
    elements.'''
    
    def insertAtIndex(self, arr, sizeOfArray, index, element):
        #Your code here
        # shifting all elements till index to the right by 1
        for i in range(sizeOfArray-1,index,-1):
            arr[i] = arr[i-1]
        
        # inserting element at the given index
        arr[index] = element
 
#{ 
#  Driver Code Starts
#Initial Template for Python 3


def main():
    T=int(input())
    while(T>0):
        sizeOfArray=int(input())
        arr=[int(x) for x in input().strip().split()]
        arr.append(-1)
        index,element=map(int,input().strip().split())
        
        Solution().insertAtIndex(arr,sizeOfArray,index,element)
        
        for i in range(sizeOfArray):
            print(arr[i],end=" ")
        print()
        T-=1

if __name__=="__main__":
    main()
# } Driver Code Ends