#include<bits/stdc++.h>
using namespace std;
// Create node 
class Node {
public:
  int val;
  Node* prev;
  Node *next;
  // Create an constructor
  Node(int val) {
    this->val = val;
    this->prev = NULL;
    this->next = NULL;
  }
};
// Take input of forward
void Print_Node_values_Forward(Node* Head){
    // Pointer of head 
    Node* temp = Head;
    while (temp != NULL)
    {
        cout << temp->val<< " ";
        temp = temp->next;
    }
    
}
void Print_Node_values_Backward(Node* Tail){
    // Pointer of head 
    Node* temp = Tail;
    while (temp != NULL)
    {
        cout << temp->val<< " ";
        temp = temp->prev;
    }
    
}

int main(){
    // Create pointer so nodes 
    Node* Head = NULL;
    Node* Tail = NULL;

    // Add values 
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);

    // Build Connection 
    Head = a;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev =b;
    c->next = d;
    d->prev = c;
    d->next = e;
    e->prev =d;
    Tail = e;

    Print_Node_values_Forward (Head);
    cout << endl;
    Print_Node_values_Backward (Tail);

     

    return 0;
}