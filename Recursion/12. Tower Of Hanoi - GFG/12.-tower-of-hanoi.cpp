// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    long long toh(int N, int from, int to, int aux) {
        // Your code here
    long long count = 1;
    
    if(N==1){        //base case
        cout << "move disk 1 from rod " << from << " to rod " << to << endl;
        return 1;
    }
    
    // move smaller to auxillary
    count += toh(N-1,from,aux,to);
    cout << "move disk " << N << " from rod " << from << " to rod " << to << endl;
    
    // move bigger to destination
    count += toh(N-1,aux,to,from);
    return count;
    
  }

};

// { Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}


//Position this line where user code will be pasted.  // } Driver Code Ends