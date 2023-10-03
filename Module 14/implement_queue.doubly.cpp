#include<bits/stdc++.h>
using namespace std;
// Create Doubly link list 
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

// Create queue
class myQueue{
    public:

    // create the nodes 
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0 ;
    // create opartions 

    void push(int val){
        // create node 
        Node* newNode = new Node(val);
        sz++;
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        
    }

    void pop(){
        sz--;
        // store the deleteNode
        Node* deleteNode = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
            delete deleteNode;
            return;
        }
        head->prev = NULL;
        delete deleteNode;
        
    }

    int front(){
        return head->val;
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

    // create the queue
    myQueue mYqueue;

    // take input ;
    int n; cin >> n;

    while (n--)
    {
        int x; cin>>x;
        mYqueue.push(x);
 
    }

    while (!mYqueue.empty())
    {
        cout << mYqueue.front() << " " << mYqueue.size()<< endl;
        mYqueue.pop();
    }
    
    

    return 0;
}