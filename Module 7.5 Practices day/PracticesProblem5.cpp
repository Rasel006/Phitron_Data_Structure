//  Take a singly linked list as input and sort it in descending order. Then print the list.
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
// / Insert Node 
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

// Print the The Linked List Decending 
void Node_Decending(Node* Head){
    // Use Secetion sort 
    for (Node* i = Head; i->next != NULL; i = i->next)
    {
        for (Node* j = i->next; j  != NULL; j = j->next)
        {
            if (i->val < j->val)
            {
                swap(i->val,j->val);
            }
            
        }
        
    }
    
}
// Print the The Linked List Acecending 
void  Node_Aecending(Node* Head){
    // Use selection sort 
    for (Node* i = Head; i->next != NULL; i = i->next)
    {
        for (Node* j = i->next; j  != NULL; j = j->next)
        {
            if (i->val > j->val)
            {
                swap(i->val, j->val);
            }
            
        }
        
    }
    
}

// Print the Linked List 
void print_Node(Node* Head){
    // Create an temp Pointer 
    Node* temp = Head;
    while (temp != NULL)
    {
        cout << temp->val<< " ";
        temp = temp->next;

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

    // Print the Linked list Decending 
    Node_Decending(Head);
    print_Node(Head);
    cout <<endl; 
    // Print the Linked list Aecending 
    Node_Aecending(Head);
    print_Node(Head);
    cout<<endl; 



     

    return 0;
}