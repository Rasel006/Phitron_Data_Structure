#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void printSSLrecursive(Node* n)
{
    if(n == NULL) return;
    //printing Normally
    /*cout << n->val << " ";
    printSSLrecursive(n->next);*/
    //printing reversly
    printSSLrecursive(n->next);
    cout << n->val << " ";

}
int main()
{

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    printSSLrecursive(head);
    return 0;
}