// { Driver Code Starts
//Initial Template for C++


#include <iostream>
using namespace std;

const int stackMax=100000;
int stack[stackMax];
int top=-1;

void push(int data);

void pop();

void display();

 // } Driver Code Ends
//User function Template for C++

//Complete these functions

//Function to push data at the top of stack
void push(int data)
{
    //Your code here
    if(top == stackMax-1){
        cout<<"Stack Full"<<endl;
        return;
    }
    top++;
    stack[top] = data;

    
}
//Function to pop the topmost data
void pop()
{
    //Your code here
    if(top == -1){
        cout<<"Stack Empty"<<endl;
        return;
    }
    top--;
    
}
//Function to display the stack from index 0 
void display()
{
    //Your code here
    if(top == -1) cout<<"-1";
    for(int i = top; i >= 0; i--){
        cout<<stack[top-i]<<" ";
    }
    cout<<endl;
    
}


// { Driver Code Starts.

int main() {
    
    int testcases; //Number of testcases
    cin>>testcases; //Input number of testcases
    while(testcases--) //While testcases exist
    {
        top=-1; //For each testcase the stack top starts from -1
        
        int queries; //How many queries we want to execute
        cin>>queries;
        
        while(queries--) //While queries exist
        {
            int queryType; //What's the query type
            cin>>queryType; 
            if(queryType==1) //If query is push then we input x and push it
            {
                int x;
                cin>>x;
                push(x);//pushing x
            }
            else if(queryType==2) //If query is pop the we just pop the top element
            {
                pop();
            }
            else
            {
                display(); //The third query is display
            }
            
        }
        
    }
    
    
    
	return 0;
}



  // } Driver Code Ends