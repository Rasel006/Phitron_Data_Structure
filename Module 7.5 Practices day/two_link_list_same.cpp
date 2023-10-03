#include<bits/stdc++.h>
using namespace std;
// Create the nodes 
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
// Create size of node 
int sizeOfNode(Node* Head){
    // Create Head Pointer 
    Node* temp = Head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
// Same vale in node or not 
bool Same_values(Node* Head_1,Node* Head_2){
    // Check same or not 
    bool flag = true;
    // Create node pointers for head 
    Node* temp_1 = Head_1;
    Node* temp_2 = Head_2;
    while (temp_1 != NULL)
    {
        if (temp_1->val != temp_2->val)
        {
            flag = false;
            break;
        }
        temp_1 = temp_1->next;
        temp_2 = temp_2->next;
    }
    return flag;
}

int main(){

      // Create pointer 
    Node* Head_1 = NULL;
    Node* Head_2 = NULL;
    Node* Tail_1 = NULL;
    Node* Tail_2 = NULL;


    // Input Node   first 
        int val_1;
        cin >> val_1; //First time handle -1
        while (val_1 != -1)
        {
            Insert_Node(Head_1, Tail_1, val_1);
            cin >> val_1;
        }
        // Seconde linked list input 
        int val_2;
        cin >> val_2; //First time handle -1
        while (val_2 != -1)
        {
            Insert_Node(Head_2, Tail_2, val_2);
            cin >> val_2;
        }
       // Error case handle 
    if (Head_1 != NULL && Head_2 != NULL && Tail_1 != NULL && Tail_2 != NULL && sizeOfNode(Head_1) == sizeOfNode(Head_2)){  
        if(Same_values(Head_1,Head_2) == true)
            {
                cout <<endl<< endl;
                cout << "Yes The Two Linked List are Same" << endl;
            }
            else{
                cout <<endl<< endl;
                cout << "NO The Two Linked List are Not Same" << endl;
            }
    }
    else if (Head_1 == NULL && Head_2 == NULL)
    {
                cout <<endl<< endl;
                cout << "Yes The Two Linked List are Same But Those Two are NULL" << endl;
    }
    
    else{
        cout <<endl<< endl;
                cout << "NO The Two Linked List are Not Same" << endl;
    }
            

    return 0;
}