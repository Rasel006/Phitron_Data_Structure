//  Take a singly linked list as input and check if the linked list is sorted in ascending order.
#include<bits/stdc++.h>
using namespace std;
// Create Nodes 
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

// create function that insert value on node 
void insert_Input_Node_Val(Node* &Head,int val){
    // Create new Node 
    Node* newNode = new Node(val);
    // Head NULL or NOT 
    if (Head == NULL)
    {
        Head = newNode;
        return;
    }
    Node* temp = Head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Node sorted or not 
void NodeSorted(Node* Head){
    // Take head pointer to run the oparation 
    Node* temp = Head;
    bool flag = true;
    while (temp->next != NULL)
    {
        if (temp->val > temp->next->val)
        {
            flag = false;
            break;
        }
        temp = temp->next;
    }

    // Print Is it YES or NOT
    if(flag == true){
        cout << "YES";
    }
    else{
        cout << "NO";
    }   
}
int main(){
    // Create Head Pointer
    Node* Head = NULL;
    // Create nodes and insert value  
    cout << "Please Input value:";
    while (true)
    {
        int val; cin >>val;
        if (val == -1)
        {
            break;
        }
        else{
            insert_Input_Node_Val(Head, val); 

        }
        
    }
    
    // Print That node sorted or not 
    NodeSorted(Head);
     

    return 0;
}