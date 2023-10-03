#include<bits/stdc++.h>
using namespace std;
// Create double linked list 

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

// Insert node 
void Insert_Node(Node* &Head, Node* &Tail, int val){
    // Create new node 
    Node* newNode = new Node(val);
    // check coner case 
    if (Head == NULL)
    {
        Head = newNode;
        Tail = newNode;
    }
    else{
        Tail->next  = newNode;
        newNode->prev = Tail;
        Tail = newNode;
    }
    

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
    // Create pointer 
    Node* Head = NULL;
    Node* Tail = NULL;

    int val; 
    cin >> val;
    while (val != -1)
    {
        Insert_Node(Head, Tail, val);
        cin >> val;
    }

     Print_Node_values_Forward (Head);
        cout << endl;
        Print_Node_values_Backward (Tail);
    
     

    return 0;
}