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
void insert(Node* head, int pos, int val)
{
    Node* newNode = new Node(val);
    Node* tmp = head;
    for(int i = 1; i <= pos - 1; i++) //O(n)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next =newNode;
}
void inserAtTailOptmly(Node*& head, Node*& tail, int val) //O(1)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head  = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void insertHead(Node*& head, int val) //O(1)
{
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
int sizeOfLinkedList(Node* head)
{
    Node* tmp = head;
    int cnt = 0;
    while(tmp != NULL) //O(n)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void printLinkedList(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL) //O(n)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    //Node Insert
    Node* head = new Node(10); //head tracking
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* tail = d; // tail tracking
    //Node Linking
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    printLinkedList(head);
    cout <<"Tail->" << tail->val << endl;
    //Node Printing
    // insert(head, 5, 42);
    
    int pos, val;
    cout << "Enter Position: "; cin >> pos;
    cout << "Enter Value: "; cin >> val;
    if(pos > sizeOfLinkedList(head))
    {
        cout << "Invalid Position" << endl;
    }
    else if(pos == 0)
    {
        insertHead(head, val);
    }
    else if(pos == sizeOfLinkedList(head))
    {
        inserAtTailOptmly(head, tail, val);
    }
    else
    {
        insert(head, pos, val);
    }    
    printLinkedList(head);
    cout <<"Tail->" << tail->val << endl;
    return 0;
}