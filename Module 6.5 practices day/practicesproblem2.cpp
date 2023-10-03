// Question: Take a singly linked list as input and check if the linked list contains any duplicate value. You can assume that the maximum value will be 100.
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

// Insert Value to the nodes 
void Insert_Value_Nodes(Node* &Head, int val){
    // Create an new node 
    Node* newNode = new Node(val);
    // Give Head value if it's Null 
    if (Head == NULL){
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
// Check is there any Duplicate value or not  return yes or no
string Check_Duplicate(Node* Head){
    // Create frequncy array for checking duplicate 
    vector <int> freq(100,0);
    // Adding value to fequncy array
    Node * temp = Head;
    while (temp != NULL)
    {
        freq[temp->val]++;
        temp = temp->next;
    }
    bool flag = false;
    for (int i = 0; i < 100; i++)
    {
        if (freq[i] >=2)
        {
            flag = true;
        }
        
    }
    
    if (flag == true)
    {
        return "YES";
    }
    else{
        return "NO";
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
        string result =  Check_Duplicate(Head);
        cout << result<< endl;
    }
    else{
        cout << "Terminating the program ...."<< endl;
        break;
    }

    
    }
     

    return 0;
}