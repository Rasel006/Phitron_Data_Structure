#include<bits/stdc++.h>
using namespace std;
// Create Double Node 
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

// Insert Node
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
        newNode->prev = Tail;
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

// Reverse the list 
void Reverse_Double(Node* Head,Node* Tail){
    // Make pointers 
    Node* i = Head;
    Node* j = Tail;
    while (i != j && j->next != i)
    {
        swap(i->val, j->val);
        i = i->next;
        j = j->prev;

    }
    

}


int main(){
    
    // Create Pointers 
    Node* Head = NULL;
    Node* Tail = NULL;

    // insert Node val 
    int val; cin >> val;
    while (val != -1)
    {
        Insert_Node(Head, Tail, val);
        cin >> val;
    }
    

    
    // Make the List reverse 
    Reverse_Double(Head, Tail);
    // Print the result 
    print_list(Head);
     

    return 0;
}