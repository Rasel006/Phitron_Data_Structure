// Take a stack of size N as input and copy those elements to another stack to get the values in the order they were inserted and print them. You should use STL to solve this problem.
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    stack <int> myStack;

    // take input 
    int n; cin >> n;

    while (n--)
    {
        int x; cin >> x;
        myStack.push(x);
    }
    
    // copy to another 
    stack <int> tempStack;
    while (!myStack.empty())
    {
        tempStack.push(myStack.top());
        myStack.pop();
    }
    
    while (!tempStack.empty())
    {
        cout << tempStack.top() << " ";
        tempStack.pop();
    }
    
     

    return 0;
class Node {
public:
  int val;
  Node *next;
  // Create an constructor
  Node(int val) {
    this->val = val;
    this->next = NULL;
  }
};
}