#User function Template for python3

'''
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
'''
def maximum(head):
    #code here
    current = head
    maxi = current.data
    while(current != None):
        if(current.data > maxi ):
            maxi = current.data
        current = current.next
    return maxi
    
    
def minimum(head):
    #code here
    current = head
    mini = current.data
    while(current != None):
        if(current.data < mini):
            mini = current.data
        current = current.next
    return mini

#{ 
#  Driver Code Starts
#Initial Template for Python 3

import io
import sys

    
# Node class
class Node:
    def __init__(self,data):
        self.data=data
        self.next=None
#Linked list class
class LinkedList:
    def __init__(self):
        self.head=None
        self.tail=None

    # append at the end of the list
    def append(self,new_node):
        if self.head is None:
            self.head=new_node
            self.tail=new_node
            return
        self.tail.next=new_node
        self.tail = self.tail.next

if __name__ == '__main__':
    t=int(input())
    for cases in range(t):
        n=int(input())
        a=LinkedList()
        nodes=list(map(int,input().strip().split())) #list containing nodes
        for x in nodes:
            node=Node(x) # create a new node
            a.append(node)
        print(maximum(a.head), end = " ")
        print(minimum(a.head))
# } Driver Code Ends