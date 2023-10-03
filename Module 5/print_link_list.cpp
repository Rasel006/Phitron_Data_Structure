#include<bits/stdc++.h>
using namespace std;

// Create node for linked list 
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

int main(){

    //  Create nodes
    Node* Head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);

    // Linked the objects 
    Head->next= a;
    a->next= b;
    b->next= c;
    c->next= d;
    // Worst way to print the values 
    cout<<"Worst way to print the values"<< endl; 
    cout << "Head >> "<< Head->val <<endl; 
    cout << "A >> "<< Head->next->val <<endl; 
    cout << "B >> "<< Head->next->next->val <<endl; 
    cout << "C >> "<< Head->next->next->next->val <<endl; 
    cout << "D >> "<< Head->next->next->next->next->val <<endl; 

    // Best way to print the values 
    
    Node* tmp = Head; // create a tempralrily var for the use in loop 
    char i = '@';
    while (tmp != NULL)
    {
        if(i == '@'){
        cout << "Print the Head with loop >>"<< tmp->val<< endl;
        }
        else{
        cout << "Print the "<<i<<" with loop >>"<< tmp->val<< endl;
        }
        tmp = tmp->next;
        i++;
    }
    

    return 0;
}