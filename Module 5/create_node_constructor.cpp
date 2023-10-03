#include<bits/stdc++.h>
using namespace std;

// Create node class 
class Node{
    public :
    int val;
    Node* next_grp;
    
    // create constructor 
    
    Node(int val){
        this->val = val;
        this->next_grp = NULL;
    }

};


int main(){

    // Create objcet with constructor of Node 
    Node Head(10),b(20),c(30);
    Head.next_grp = &b; // Assign another group adress 
    Head.next_grp->next_grp=&c;

    // Print the valuse 
    cout << "Value of Head with node and print other values connected with head "<< endl;
    cout<< Head.val << endl<< Head.next_grp->val << endl << Head.next_grp->next_grp->val<< endl; //Easey way to print d
    cout << endl<< endl;
    cout<< Head.val << endl<< (*Head.next_grp).val << endl << (*Head.next_grp->next_grp).val<< endl; //Hard way to print d
     

    return 0;
}