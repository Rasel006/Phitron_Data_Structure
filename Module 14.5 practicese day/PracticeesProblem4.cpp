//  Take a queue of size N as input. You need to copy those elements in another queue in reverse order. You might use stack here. You should use STL to solve this problem. After copying in another queue, print the elements of that queue.
#include<bits/stdc++.h>
using namespace std;

int main(){

    //  Create the queue 
    queue <int> myQueue;
    
    int n; cin >> n;
    while (n--)
    {
        int x; cin >> x;
        myQueue.push(x);
    }
    
    // copy the to stack for the revese the queue 
    stack <int> myStack;
    while (!myQueue.empty())
    {
        myStack.push(myQueue.front());
        myQueue.pop();
    }

    while (!myStack.empty())
    {
        myQueue.push(myStack.top());
        myStack.pop();
    }

    // print the the queue revese 

    while (!myQueue.empty())
    {
        cout << myQueue.front() << " ";
        myQueue.pop();
    }
    
     
    
    
    

    return 0;
}