#include<bits/stdc++.h>
using namespace std;
// create NOde 
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
// input add to the node 
void insert_Node_At_Tail(Node* &Head, int val){
    // create new node 
    Node* new_Node = new Node(val);
    if (Head == NULL)
    {
        Head = new_Node;
        return;
    }

    Node* tmp = Head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = new_Node;
}
// print the node
// / create function for print those node 
void print_Node_Val(Node* Head){

    Node* tmp = Head;
    int i = 1;
    while (tmp != NULL)
    {
        cout <<"This is the value of "<<i<< " Number Node: " << tmp->val << endl << endl;
        tmp = tmp->next;
        i++;
    }
    
}

int main(){
    int val ;
    Node* Head = NULL;
    // Start take input and stop when get -1 
    while (true)
    {
        cin >> val;
        insert_Node_At_Tail(Head, val);
        print_Node_Val(Head);
        if (val == -1){
            break;
        }
    }
    
     

    return 0;
}