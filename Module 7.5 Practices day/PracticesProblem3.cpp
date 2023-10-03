// Take a singly linked list as input and print the middle element. If there are multiple values in the middle print both.
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
// Find the size of the node 
int Node_size (Node* Head){
    // Create a pointer of head 
    Node* temp  = Head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++; 
        temp = temp->next;
    }
     return cnt;
} 

// Print the middle value of the Linked list

void print_Middle(Node* Head){
    int size = Node_size(Head);
    int mid = (size+1)/2;
    Node* temp = Head;
    for (int i = 0; i < mid - 1; i++)
    {
        temp = temp->next;
    }

    if (size % 2 == 0)
    {
        cout << temp->val << " " << temp->next->val;
    }
    else{
        cout << temp->val;
    }

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

    // print_Middle
    print_Middle(Head);
    


     

    return 0;
}