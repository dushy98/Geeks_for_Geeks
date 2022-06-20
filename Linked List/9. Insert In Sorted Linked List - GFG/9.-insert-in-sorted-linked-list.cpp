// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }
        
};

void displayList(Node *head)
{
    while(head)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}



 // } Driver Code Ends
//User function Template for C++

/*
struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }
        
};

*/

Node * insertInSorted(Node * head, int data)
{
    //Your code here
    if(!head)return head;
    
    Node *newNode = new Node(data);
    if(head->data > data){
        newNode->next = head;
        head = newNode;
        return head;
    }
    Node *t = head;
    while(t->next && t->next->data<data){
        t = t->next;
    }
    newNode->next = t->next;
    t->next = newNode;
    return head;
}


// { Driver Code Starts.


int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < n-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        cin >> data;
        head = insertInSorted(head, data);
        displayList (head);
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends