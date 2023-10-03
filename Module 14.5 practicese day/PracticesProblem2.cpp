//  Take a stack of size N and a queue of size M as input. Then check if both of them are the same or not in the order of removing. You should use STL to solve this problem.
#include<bits/stdc++.h>
using namespace std;

int main(){

    //  Create stack 
    stack <int> myStack;

    int n; cin >> n;
    while (n--)
    {
        int x; cin >> x;
        myStack.push(x);
    }

    // Create queue
    queue <int> myQueue;

    int m; cin >> m;
    while (m--)
    {
        int x; cin >> x;
        myQueue.push(x);
    }
    
    // check same or not 
    bool flag = true;

    if (myStack.size() != myQueue.size())
    {
        flag = false;
    }
    else{
        while (!myQueue.empty())
        {
            if (myQueue.front() != myStack.top())
            {
                flag = false;
                break;
            }
            myQueue.pop();
            myStack.pop();
            
        }
        
    }
    
    if (flag == true)
    {
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    

    return 0;
}