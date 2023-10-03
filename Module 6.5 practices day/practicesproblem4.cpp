// Question: Take a singly linked list as input, then take q queries. In each query you will be given an index and value. You need to insert those values in the given index and print the linked list. If the index is invalid print “Invalid”.
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
///////////////////////--------- System 1 ----------///////////////////////////
// Create Node and inserte value function           
void Insert_Value_Nodes(Node* &Head,int  val){
    // Create New Node 
    Node* newNode = new Node(val);
    // Head NULL or NOT 
    if (Head == NULL)
    {
        Head  = newNode;
        return;
    }
    Node* temp = Head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
///////////////////////--------- System 2 1----------///////////////////////////
// FIND THE SIZE OF NODE 
int size_Of_Node(Node* Head){
    Node* temp = Head;
    int cnt = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}
// IF POS === 0
void Insert_Value_Head(Node* &Head,int val){
    // Create New Node 
    Node* newNode = new Node(val);
    // Store Old Head Address 
    Node* temp = Head; 
    Head = newNode;
    newNode->next = temp;

}
// IF POS == LAST NODE 
void Insert_Value_Tail(Node* Head,int val){
    // Create new Node 
    Node* newNode = new Node(val);
    // Get the last node 
    Node* temp = Head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
// IF POS NORMAL 
void Insert_Value_Pos(Node* Head,int val,int pos){
    // Create new Node 
    Node* newNode = new Node(val);
    // Find the Pos the add the node 
    Node* temp = Head;
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    Node* temp2 = temp->next;
    temp->next = newNode;
    newNode->next = temp2;
}
///////////////////////--------- System 3 ----------///////////////////////////
void Print_Linked_List(Node* Head){
    // Hold the head pointer/* */
    Node* temp = Head;
    while (temp != NULL)
    {
        cout << temp->val << " " ;
        temp = temp->next; 
    }
    cout << endl;
    cout << size_Of_Node(Head)<< endl;
}


int main(){

     // Create Node Header Pointer 
    Node* Head = NULL;
    while (true)
    {
    cout << endl;
    cout << "System NO:1]-> Want to Create Linked List Give Input"<< endl;
    cout << "System NO:2]-> Want to Add Node On Position Give Input"<< endl;
    cout << "System NO:3]-> Want to Get Output"<< endl;
    cout << "System NO:4]-> Want to Terminate the Program"<< endl;
    cout << endl;
    cout << "Input The System:";
    int sys_input; cin >> sys_input;
    if (sys_input == 1)
    {
        cout << "System 1 runing......"<< endl;
        cout << "Give your values: ";
        int val; 
        while (true)
        {
            // Erorr case Handle 
            cin >> val;
            if (val == -1)
            {
                break;
            }
            else{
            Insert_Value_Nodes(Head, val);
            }
            
        }
        cout << "Node has been Created" << endl;
        
    }
    else if (sys_input == 2)
    {
        cout << "System 2 running........"<< endl;
        int n; cin >> n;
        while (n--)
        {
        cout << "Give your position and value: ";
        int pos; cin>> pos;
        int val; cin >> val;
        if (pos == 0)
        {
            Insert_Value_Head(Head, val);
            cout << "Node Add to the Head"<< endl;
        }
        else if (pos == size_Of_Node(Head))
        {
            Insert_Value_Tail(Head, val);
            cout << "Node Add to the Tail"<< endl;
        }
        else
        {
            // Handle the eror case 
            if (pos >size_Of_Node(Head))
            {
                cout<< "INVALID"<< endl;
            }
            else{
                Insert_Value_Pos(Head,val,pos);
                cout << "Node Add to this "<<pos<<"Position"<< endl;
            }
            
        }
        Print_Linked_List(Head);
        cout<< endl;
        }
        
    }
    
    else if (sys_input == 3)
    {
        cout << "Getting output from the function"<<endl;
        Print_Linked_List(Head);
    }
    else{
        cout << "Terminating the program ...."<< endl;
        break;
    }

    
    }


    return 0;
}