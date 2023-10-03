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
bool Detect_the_cycle(Node* head){
    // Use flag to Detect 
    bool flag = false;
    // Use Fast and slow algorithm 
    Node* fast = head;
    Node* slow = head;
    while (fast!=NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (slow == fast)
        {
            flag = true;
            break;
        }

    }
    
    return flag;

}
int main(){
    // Pointer 
    Node* head = NULL;
    // Create nodes 
    Node* a = new Node(10);
    Node* b = new Node(10);
    Node* c = new Node(10);
    Node* d = new Node(10);
    Node* e = new Node(10);
    // Connections 
    head = a;
    a->next = b;
    b->next =c;
    c->next = d;     //This is a cycle list 
    d->next =e;


    bool flag = Detect_the_cycle(head);

    if (flag == true)
    {
        cout << "The cycle has been detected"<< endl;
    }
    else{
        cout << "There is no cycle in the list "<< endl;
    }
    

    return 0;
}