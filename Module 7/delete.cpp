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
void deleteNode(Node* head, int pos)
{
    Node* tmp = head;
    for(int i = 1; i <= pos - 1; i++) //o(n)
    {
        tmp = tmp->next;
    }
    Node* deleteNode = tmp->next; 
    tmp->next = tmp->next->next;
    delete deleteNode;
}
void deleteHead(Node*& head) //O(n)
{
    Node* deleteNodde = head;
    head = head->next;
    delete deleteNodde;
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
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    printLinkedList(head);
    int pos;
    cout << "Enter Position: "; cin >> pos;
    if(pos >= sizeOfLinkedList(head))
    {
        cout << "Invalid Position" << endl;
    }
    if(pos == 0)
    {
        deleteHead(head);
    }
    else
    {
        deleteNode(head, pos);
    }
    printLinkedList(head);
    return 0;
}