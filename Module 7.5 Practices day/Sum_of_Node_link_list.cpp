#include<bits/stdc++.h>
using namespace std;
// Create new Node 
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
// Sum OF the Linked List 
void Print_Sum_Of_Nodes(Node* Head){
    // Create Node for point head 
    Node* temp = Head;
    long long int sum_Nodes = 0;
    while (temp != NULL)
    {
        sum_Nodes += temp->val;
        temp = temp->next;
    }
    cout << "This is Sum Of The Nodes In This Linked List: " << sum_Nodes<< endl;
}

int main(){
    // Create pointer 
    Node* Head = NULL;
    Node* Tail = NULL;


    // Input Node   first 
    int val_1;
        while (true)
        {
            cin >> val_1;
            if (val_1 == -1)
            {
                break;
            }
            Insert_Node(Head, Tail, val_1);
        }
     
    cout << endl;
    cout << endl;
    print_Node(Head);
    cout << endl;
    Print_Sum_Of_Nodes(Head);


    return 0;
}