#include<bits/stdc++.h>
using namespace std;
// create doubly list 
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

// Create the Stack 
class myStack{
    
    public:
    // Create custome node 
    Node* Head = NULL;
    Node* Tail = NULL;
    int sz = 0;

    // Oparations 
    void push (int val){
        sz++;
        // Create new Node 
        Node* newNode = new Node(val);

        if (Head == NULL)
        {
         Head = newNode;   
         Tail = newNode;   
        }
        else{
            newNode->prev = Tail;
            Tail->next = newNode;
            Tail = newNode;
        }
    }

    void pop (){
        sz--;
        Node* deleteNode = Tail;
        Tail = Tail->prev;
        if (Tail == NULL)
        {
            Head = NULL;
        }
        else{
            Tail->next = NULL;
        }
        delete deleteNode;
        

    }

    int top (){
        return Tail->val;
    }

    int size(){
        return sz;
    }
    
    bool empty (){
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

        // Implimetion 
        myStack st;
        
        // take input 
        int n; cin >> n;
        for (int i = 0; i < n; i++)
        {
            int val; cin >> val;
            st.push(val);
        }
        
        while (!st.empty())
        {
            cout << st.top() << " ";
            cout << st.size() << endl;
            st.pop();
        }
        
        

     

    return 0;
}