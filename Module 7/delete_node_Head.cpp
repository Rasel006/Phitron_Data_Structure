#include<bits/stdc++.h>
using namespace std;
// Create and Data type for Node 
class Node{
    public:
    int val;
    Node* next;

    Node (int val){
        this->val = val;
        this->next= NULL;
    }
};
// Creae print function
void print_Node(Node* Head){
    // Take the pointer of the head node best practices
    Node* Temp = Head;
    while (Temp != NULL)
    {
        cout<< Temp->val << " ";
        Temp = Temp->next;
    }

}
// // Create the function that add new node to the postion that Head 
// void Insert_Head(Node* &Head ,int val){
//     // create new node 
//     Node* newNode = new Node(val);
//     newNode->next = Head;
//     Head = newNode;
// }

// Create the function that Delete node to the postion that user gives 
void Delete_In_Pos(Node* Head, int pos){
    // Create pointer for node 
    Node* temp = Head;
    for (int i = 1; i <= pos-1; i++)
    {
        temp = temp->next;
    }
    Node* DleteNode  = temp->next;
    temp->next = temp->next->next;
    delete DleteNode;
    
}
// Create the function that Delete node to the postion Tail
void Delete_tail(Node* Head){
    // Take pointer to delete Tail 
    Node* temp = Head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    
    Node* DeleteNode = temp->next;
    temp->next = NULL;
    delete DeleteNode;
    
} 
void  Delete_Head(Node* &Head){
    // Take node that store the old head 
    Node* deleteNode = Head;
    Head = Head->next;
    delete deleteNode;
}


// Create the function that count the size of the node 
int size_Of_Node(Node* Head){
    // Take the pointer to the node 
    Node* temp = Head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

int main(){
    // We need to ad node and make and LINKED LIST 
    Node* Head = new Node(10); 
    Node* One = new Node(100); 
    Node* Two = new Node(200); 
    Node* Three = new Node(300);
    // Node* Tail = Three;
    // Connctions build by adding adress of the next node on the next pointer  
    Head->next = One;
    One->next = Two;
    Two->next = Three;
    // We want add node the positon that user gives 
    print_Node(Head);
    cout << endl;
    cout<< "Give Your Position :";
    int pos; cin >> pos;
    // Error handle in here 
    if (pos > size_Of_Node(Head))
    {
        cout << "Invalid position"<< endl;
    }
    else if(pos == size_Of_Node(Head)){
        Delete_tail(Head);
    }
    else if (pos == 0)
    {
        Delete_Head(Head);
    }
    else{
        Delete_In_Pos(Head,pos);
        cout<< "Value Deleted to the position"<< endl;
    }
    
    // Print the value form those node that are connected each other 
    print_Node(Head);

    cout << endl<<  size_Of_Node(Head);
    
    cout <<endl<<"The Node has been printed"<< endl;


     

    return 0;
}