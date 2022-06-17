// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

int maximum(struct Node* head);
int minimum(struct Node* head);

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
        cout << maximum(head) << " " << minimum(head) << endl;
    }
    return 0;
}// } Driver Code Ends


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

int maximum(Node *head)
{
    //Your code here
    int max = INT_MIN;
    Node *current = head;
    while(current != NULL){
        if (current->data > max){
            max = current->data;
        }
        current = current->next;
    }
    return max;
}

int minimum(Node *head)
{
    //Your code here
    int min = INT_MAX;
    Node *current = head;
    while(current != NULL){
        if (current->data < min){
            min = current->data;
        }
        current = current->next;
    }
    return min;
}