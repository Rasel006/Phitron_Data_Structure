//  Take two stacks of size N and M as input and check if both of them are the same or not. Don’t use STL to solve this problem.
#include<bits/stdc++.h>
using namespace std;
class Node {
public:
  int val;
  Node *prev;
  Node *next;
  // Create an constructor
  Node(int val) {
    this->val = val;
    this->prev = NULL;
    this->next = NULL;
  }
};

// Create Stack 
class myStack{
    
    public:

    // create the pointers 
    Node* Head = NULL;
    Node* Tail = NULL;
    int sz = 0; // size of the stack


    // create oparations 

    void push(int val){
        sz++;
        // Create new node 
        Node* newNode = new Node(val);

        if (Head == NULL)
        {
            Head = newNode;
            Tail = newNode;
        }
        else{
            Tail->next = newNode;
            newNode->prev = Tail;
            Tail = newNode;
        }
        
    }
    
    void pop(){
        sz--;
        Node* deleteNode = Tail;
        Tail = Tail->prev;
        if (Tail == NULL)
        {
            Head = NULL;
            delete deleteNode;
            return;
        }
        
        Tail->next = NULL;
        delete deleteNode;
    }

    int top(){
        return Tail->val;
    }

    int size(){
        return sz;
    }

    bool empty(){
        if (sz == 0)
        {
            return true;
        }
        else{
            return false;
        }
        
    }

};


int main(){

    //  Create Staks

    myStack stack_one;
    myStack stack_two;
    // Take input of stack one  

    int sizeOfOne; cin >> sizeOfOne;

    while (sizeOfOne--)
    {
        int x; cin >> x;
        stack_one.push(x);
    }

       // Take input stack two 
    int sizeOfTwo; cin >> sizeOfTwo;

    while (sizeOfTwo--)
    {
        int x; cin >> x;
        stack_two.push(x);
    }

    bool flag = true;

    if (stack_one.size() != stack_two.size())
    {
        flag = false;
    }
    else{
        while (!stack_one.empty()) 
            {
                if (stack_one.top() != stack_two.top())
                {
                    flag = false;
                    break;
                }
                stack_one.pop();
                stack_two.pop();
            }
    }

    if (flag == true)
    {
        cout << "Yes"<< endl;
    }
    else{
        cout << "No" << endl;
    }
    
    


    return 0;
}