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
// create functin that add node on tail
void insert_Node_At_Tail(Node* &Head, int val){
    // create new node 
    Node* new_Node = new Node(val);
    if (Head == NULL)
    {
        cout << "New Node has been add to the Head"<< endl;
        Head = new_Node;
        return;
    }

    Node* tmp = Head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = new_Node;
    cout << "New Node has been add to the Tail"<< endl;
}

// create function that add node on the position that user give
void insert_Node_At_Position(Node* Head, int pos,int val){
    // Check the pos 
     if (pos == 1)
    {
        cout << "Please Use system 4 to add Head to Node"<< endl;
        return;
    }
    // Create new node
    Node* new_Node = new Node(val);
    // Now Go position - 1
    Node* tmp = Head;
    for (int i = 1; i < pos - 1; i++)
    {
        cout << "inside the tmpofpos"<< endl;
        tmp = tmp->next;
    }
    new_Node->next = tmp->next;
    tmp->next = new_Node;
    cout << "New Node has been added to this " << pos << " Position"<< endl;
    
}
// Create function for insert value to head 
void insert_to_Head(Node* &Head, int val){
    // Create new node 
    Node* new_Node = new Node(val);
    new_Node->next = Head;
    Head = new_Node;
    cout << "New Node has been added to The Head"<< endl;
}

// create function for print those node 
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

// Create function for Delete Node 
void delete_To_pos(Node* Head,int pos){
    Node* tmp = Head;
    for (int i = 1; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    // Sotre the adress for delete the Node 
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    cout << pos << " Number Node Deleted"<< endl;
}


int main(){
    // This way can adde node on user input position 
    Node * Head = NULL;

    while (true)
    {
        cout << endl << endl;
        cout << "System No: 1] Insert Node On Tail"<< endl;
        cout << "System No: 2] Insert Node On Position"<< endl;
        cout << "System No: 3] Print Node Values"<< endl;
        cout << "System No: 4] Insert Node On Head"<< endl;
        cout << "System No: 5] Delete Node By Position"<< endl;
        cout << "System No: Others] Terminate the System program"<< endl;
        cout << endl << endl;

        int system_input; cin >> system_input;
        // Run the system according the input 
        if (system_input == 1)
        {
            cout << "Loading system 1......."<< endl;
            cout << "Please Enter the Value: ";
            int val; cin >> val;
            insert_Node_At_Tail(Head, val);
        }
        else if (system_input == 2)
        {
            cout << "Loading system 2......"<< endl;
            cout << "Please Enter the Position: ";
            int pos; cin >> pos;
            cout << endl;
            cout << "Please Enter the Value: ";
            int val; cin >> val;
            insert_Node_At_Position(Head, pos, val);
        }
        else if (system_input == 3)
        {
            cout << "Loading system 3........"<< endl;
            cout << "Printing The Node Values "<< endl<< endl;
            print_Node_Val(Head);
        }
        else if (system_input == 4)
        {
            cout << "Loading system 4......"<<endl; 
            cout << "Please Enter Number : "; 
            int val; cin >> val;
            insert_to_Head(Head, val);

        }
        else if (system_input == 5)
        {
            cout << "Loading System 5........"<<endl;
            cout << "Give The Position Want Delete :";
            int pos; cin >> pos;
            delete_To_pos(Head, pos);
        }
        
        
        else{
            cout << "Loading system Terminate........"<< endl;
            cout << "System of Node Stoped"<< endl;
            break;
        }
        
        
        

    }
    

     

    return 0;
}