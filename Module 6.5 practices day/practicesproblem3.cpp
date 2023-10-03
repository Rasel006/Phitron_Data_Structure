// Question: Take a singly linked list as input and print the middle element. If there are multiple values in the middle print both.
#include<bits/stdc++.h>
using namespace std;
// Create Nodee 
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

// Create Node function 
void Insert_Value_Nodes(Node* &Head, int val){
    // create new node 
    Node* newNode = new Node(val);
    // chcek head Null or not / 
    if (Head == NULL)
    {
        Head = newNode;
        return;
    }
// Insert temp to the tail 
    Node* temp = Head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
int CounterNode(Node* Head){
    Node* temp = Head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
// Create function that Print the middle node val
void MiddleNode(Node* Head){
    // Call ConterNode To get Node Size 
    int sizeOfNode = CounterNode(Head);
    if (sizeOfNode % 2 == 0)
    {
        Node* temp = Head;
        for (int i = 1; i < sizeOfNode/2; i++)
        {
            temp = temp->next;
        }
        cout << endl<<endl;
        cout << "Middle two node value printed : ";
        cout << temp->val << " "<< temp->next->val<< endl;
        cout << endl<<endl;

    }
    else{
            Node* temp = Head;
            for (int i = 0; i < sizeOfNode/2; i++)
            {
                temp = temp->next;
            }
            cout << endl<<endl;
            cout << "Middle one node value printed : ";
            cout << temp->val;
            cout << endl<<endl;

    }
    

}

int main(){
    // Create Node Header Pointer 
    Node* Head = NULL;
    while (true)
    {
    cout << endl;
    cout << "System NO:1]-> Want to Give Input"<< endl;
    cout << "System NO:2]-> Want to Get Output"<< endl;
    cout << "System NO:3]-> Want to Terminate the Program"<< endl;
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
        cout << "Getting output from the function"<<endl;
        MiddleNode(Head);
    }
    else{
        cout << "Terminating the program ...."<< endl;
        break;
    }

    
    }

     

    return 0;
}