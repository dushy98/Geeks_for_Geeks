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
//Complete this function
void insertAtPosition(Node *head, int pos, int data)
{
    //Your code here
    int len = 0;
    Node *t = head;
    while(t){
        len++;
        if(len == pos)break;
        t = t->next;
    }
    if(len<pos)return;
    
    Node *newNode = new Node(data);
    newNode->next = t->next;
    t->next = newNode;
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
        int pos; cin >> pos;
        int d; cin >> d; 
        insertAtPosition(head, pos, d);
        displayList (head);
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends