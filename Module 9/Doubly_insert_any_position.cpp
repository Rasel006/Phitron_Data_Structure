#include<bits/stdc++.h>
using namespace std;
// Create Node 
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

// Insert at any pos
void insert_any_pos(Node* Head, int pos, int val){
    // Create new node 
    Node* newNode = new Node(val);
    // Pointer for head 
    Node* temp = Head;
    // find the postiton /
    for (int i = 0; i < pos-1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
    newNode->next->prev = newNode;

}
// Find the size of Linked list 
int size_of_linked(Node* Head){
    // pointer of head as
    Node* temp = Head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    
    return cnt ;
}



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
    
    // Insert at any pos 
    int pos, val; cin >> pos>> val;
    if (size_of_linked(Head) <= pos)
    {
        cout << "Invalid pos input "<< endl;
    }
    else{
        insert_any_pos(Head,pos, val);
        // print linked list two ways
        Print_Node_values_Forward (Head);
        cout << endl;
        Print_Node_values_Backward (Tail);
    }
    

     

    return 0;
}