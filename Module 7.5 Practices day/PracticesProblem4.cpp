// Take a singly linked list as input, then print the maximum value of them.
#include<bits/stdc++.h>
using namespace std;
// Create Node 
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

// Insert Node 
void Insert_Node(Node* &Head, Node* &Tail, int val){
    // Create new NOde
    Node* newNode = new Node(val);
    // If Head Null do this 
    if (Head == NULL)
    {
        Head = newNode;
        Tail = newNode;
    }
    // Or Head have Node do this 
    Tail->next = newNode;
    Tail = newNode;
}
// Create an function that find the max of the node value 
void print_max(Node* Head){
    // Create and head pointer 
    Node* temp = Head;
    int maxim = INT_MIN;
    while (temp != NULL)
    {
       maxim = max(temp->val, maxim);
        temp = temp->next;
    }
    cout <<"Maximum of the Linked List : "<<maxim << endl ;
}
// Create an function that find the min of the node value 
void  print_min(Node* Head){
    // Create and head pointer 
    Node* temp = Head;
    int minimum = INT_MAX;
    while (temp != NULL)
    {
        minimum = min(temp->val, minimum);
        temp = temp->next;
    }
    cout <<"Minimum of the Linked List : "<<minimum<< endl ;
}


int main(){
     // Create Pointers for the point 
    Node* Head = NULL;
    Node* Tail = NULL;

    // Call Insert function
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        Insert_Node(Head, Tail, val);
    }

    // Print the maximum 
    print_max(Head);
    // Print the minimum
    print_min(Head);

     

    return 0;
}