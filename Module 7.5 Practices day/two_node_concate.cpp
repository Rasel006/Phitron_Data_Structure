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
// Create Node conCade 
void ConCat(Node* &Tail_1,Node* &Head_2){
    Tail_1->next = Head_2;
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

    //  Create Pointer s 
    Node * Head_1 = NULL;
    Node * Head_2 = NULL;
    Node * Tail_1 = NULL;
    Node * Tail_2 = NULL;

    // Input Node   first 
    int val_1;
        while (true)
        {
            cin >> val_1;
            if (val_1 == -1)
            {
                break;
            }
            Insert_Node(Head_1, Tail_1, val_1);
        }
    // Input Node     seceond
    int val_2;
        while (true)
        {
            cin >> val_2;
            if (val_2 == -1)
            {
                break;
            }
            Insert_Node(Head_2, Tail_2, val_2);
        }

        // ConCatinate Two Node Or Add Head_2 to the Tail of Head_1
        // Print the final result 
        cout << "Print Head 1"<< endl;
        print_Node(Head_1);

        ConCat(Tail_1,Head_2);

        cout << endl << "Print Head 2"<< endl;
        print_Node(Head_2);
        cout<<endl<< "Print Full"<< endl;
        print_Node(Head_1);


    return 0;
}