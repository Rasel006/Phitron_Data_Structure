#include<bits/stdc++.h>
using namespace std;
// create singly 
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

// create the Queue 
class myQueue {
    public:
    Node* Head = NULL;
    Node* Tail = NULL;
    int sz = 0;

    // create functions for the queue 
    void push (int val){
        // create node 
        Node* newNode = new Node(val);
        sz++;
        if (Head == NULL)
        {
            Head = newNode;
            Tail = newNode;
        }
        else{
            Tail->next = newNode;
            Tail = newNode;
        }
        
    }

    void pop(){
        sz--;
        Node* deleteNode = Head;
        Head = Head->next;
        delete deleteNode;
    }
    
    int front(){
        return Head->val;
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

     myQueue mYQue;
    
    // take input of the values
     int n; cin >> n;

     while (n--)
     {
        int x; cin >> x;
        mYQue.push(x);
     }

     while (!mYQue.empty())
     {
        cout <<"My queue values "<< mYQue.front()<< " Same Index Size "<< mYQue.size()<< endl;
        mYQue.pop();
     }
     
     cout << mYQue.empty(); 
     

    return 0;
}