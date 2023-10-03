//  Take two singly linked lists as input and check if their sizes are same or not.
#include<bits/stdc++.h>
using namespace std;
// Create node 
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

// Insert Node function 
void Insert_Node(Node* &Head, Node* &Tail, int val){
    // Create new Node 
    Node* newNode = new Node(val);
    // IF HEAD NULL OR NOT 
    if (Head == NULL)
    {
        Head = newNode;
        Tail = newNode;
        return;
    }
    Tail->next = newNode;
    Tail = newNode;
    
}
// Find the size of Node 
int Node_size (Node* Head){
    // Create temp for store the head pointer
    Node* temp = Head; 
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
int main(){
    // Create Pointers for Node 
    Node* Head_1 = NULL;
    Node* Head_2 = NULL;
    Node* Tail_1 = NULL;
    Node* Tail_2 = NULL;
    
    // Take input First linked list
    int val_1;
    while (true)
    {
        cin >> val_1;
        if (val_1 == -1)
        {
            break;
        }
        Insert_Node(Head_1, Tail_1,val_1);
    }
    
    // Take input Seceond linked list
    int val_2;
    while (true)
    {
        cin >> val_2;
        if (val_2 == -1)
        {
            break;
        }
        Insert_Node(Head_2, Tail_2,val_2);
    }
    
    // If the size is same print Yes else No
    if (Node_size(Head_1) == Node_size(Head_2))
    {
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    
     

    return 0;
}