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

// Delete at any position
void Delete_any_pos(Node* Head,int pos){
    // Create an pointer for head 
    Node* temp = Head;
    for (int i = 1; i <= pos-1; i++)
    {
        temp = temp->next;
    }
    Node* deleteNode = temp->next; // Store the delete node 
    temp->next = temp->next->next; // connect the next node of delete node 
    temp->next->prev = temp; // connec to prev to the next node 
    delete deleteNode; // final delete the node

 }


//  Delete at Tail 
void Delete_Tail(Node* &Tail,Node* &Head){
    // Store the delete node 
    Node* deleteNode = Tail;
    // Assing the tail to the previous 
    Tail = Tail->prev;
    // delete the tail 
    delete deleteNode;
    // Prevent the error if node is one 
    if (Tail == NULL)
    {
        Head = NULL;
        return;
    }
    
    // Assign the next null 
    Tail->next = NULL;
}

// Delete Head 
void Delete_Head(Node* &Head , Node* &Tail){
    // Store the delted node 
    Node* deleteNode = Head;
    // Assing new Head 
    Head = Head->next;
    // Delete the node  
    delete deleteNode;
    // Prevent the error if the node is one 
    if (Head == NULL)
    {
        Tail = NULL;
        return;
    }
    
    // Assing null to the prev Of Head 
    Head->prev = NULL;
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
    int pos; cin >> pos;
    if (size_of_linked(Head) <= pos)
    {
        cout << "Invalid pos input "<< endl;
    }
    else if(pos == size_of_linked(Head) - 1){
        Delete_Tail(Tail,Head);
    }
    else if (pos == 0)
    {
        Delete_Head(Head,Tail);
    }
    
    else{
        Delete_any_pos(Head,pos);
    }
        // print linked list two ways
        Print_Node_values_Forward (Head);
        cout << endl;
        Print_Node_values_Backward (Tail);
    

     

    return 0;
}