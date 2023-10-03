#include<bits/stdc++.h>
using namespace std;
// Create class for the node 

class Node{
    public:
    int val;
    Node* next_group;
};

int main(){

        // Assign val to Node 
        Node a,b,c;
        a.val = 100;
        b.val = 40 ;
        c.val = 50 ;
        // This is the normal way 
        a.next_group = &b;
        b.next_group = &c;
        c.next_group = NULL;
        // This way we can access the grupd from the head 
        // a.next_group->next_group= &c;
        // a.next_group->next_group->next_group = NULL;

        // Access the value and print normal way without node 
        cout << "This is the normal way to access the value of group" << endl;
        cout << "Value of a " << a.val<< endl;
        cout << "Value of b " << b.val<< endl;
        cout << "Value of c " << c.val<< endl;
        // Access the value and print with node 
        cout << "This is with node to access the VAlues of all group "<< endl;
        cout << "Value of a with node " << a.val<< endl;
        cout << "Value of b with node " << a.next_group->val<< endl;
        cout << "Value of c with node " << a.next_group->next_group->val<< endl;




    return 0;
}