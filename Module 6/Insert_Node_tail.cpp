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

// Create Insert AT Tail function
void inser_At_Tail(Node*&Head, int userInputValue){
    
    Node* newNode = new Node(userInputValue); //create the new node to insert at the tail on link list 

    // if Head == NULL than Head  === new node 
    if (Head == NULL)
    {
        Head = newNode;
        return;
    }
    // Or if head != Null than add node to the tail of the linked list 
    Node* temp = Head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    
}

// Create the Printing Linked List function 
void  print_Linked_List(Node* Head){

    Node * tmp = Head;
    int i = 1;
    while (tmp != NULL)
    {
        cout <<"Node NO:"<<i << " Value From Linked List "<< tmp->val << endl << endl;
        tmp = tmp->next;
        i++;
    }
     
}

int main(){

    // Create an Head node 
    Node * Head = NULL;

    // Create The insert Tail function
    // if Head == NULL than new node will be the head 
    // Make a system of Insert Node to the tail and print  
while (true)
{
    cout << endl<< endl;
    cout << "Choose the system what you want"<<endl;
    cout << "System NO:1] Insert value on tail"<< endl;
    cout << "System NO:2] Print the values of LINKED LIST "<< endl;
    cout << "System NO:3] Terminate The System "<< endl;
    cout << endl<< endl;
    int user_Input_System; cin >> user_Input_System;
    
    if (user_Input_System == 1)
    {
        cout << "Starting System NO:1....."<< endl; 
        cout << "Please Enter The Value :";
        int user_Input_Node_Value;
        cin >> user_Input_Node_Value;
        inser_At_Tail(Head, user_Input_Node_Value);
        cout << "Node inserted to the Linked List" << endl;
    }
    else if (user_Input_System == 2)
    {
        cout << "Starting System NO:2....."<< endl;
        cout <<endl<<"Printing the Link List values....." << endl;
        print_Linked_List(Head);
    }
    else{
        cout << "Starting System NO:3......"<< endl;
        cout<< "Tail Insert System Terminated" << endl;
        break;
    }
}

    
    

    
    


     

    return 0;
}