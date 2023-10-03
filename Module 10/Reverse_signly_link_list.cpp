#include<bits/stdc++.h>
using namespace std;
// Create Single Nodes  
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
// Insert Node;
void Insert_Node(Node* &Head, Node* &Tail, int val){
    // Create new node 
    Node* newNode = new Node(val);
    // Check corner case 
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

// Print the Linked list 
void print_list(Node* Head){
    // create pointr of head 
    Node* temp = Head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
} 

// Make the List Reverse 
void reverse_Recursive(Node* &Head, Node* Current)
{
    // Base case 
    if (Current->next == NULL) // make head reverse
    {
        Head = Current;
        return;
    }
    reverse_Recursive(Head, Current->next); // call recursive
    Current->next->next = Current; // make reverse
    Current->next = NULL; // reverse next null
    return;
}



int main(){

    //  Create pointer of nodes 
    Node* Head = NULL;
    Node* Tail = NULL;

    // Take input 
    int val; cin >> val;
    while (val != -1)
    {
        Insert_Node(Head, Tail, val);
        cin >> val;
    }
    

    // Make the List reverse by recursive 
    reverse_Recursive(Head, Head);
    // Print the result 
    print_list(Head);
    return 0;
}