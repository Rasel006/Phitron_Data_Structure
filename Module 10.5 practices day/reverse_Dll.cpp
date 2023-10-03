#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* prev;
        Node *next;
    Node(int val)
    {
        this->prev = NULL;
        this->val = val;
        this->next = NULL;
    }
};
void insertAtTail(Node*& head, Node*& tail, int val)
{
    Node* newNode = new Node(val);
    if(tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void reverseDLL(Node* head, Node* tail)
{
    Node* i = head;
    Node* j = tail;
    while(i != j && i->next != j)
    {
        swap(i->val, j->val);
        i = i->next;
        j = j->prev;
    }
    swap(i->val, j->val);
}
void printForward(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void printBackward(Node* tail)
{
    Node* tmp = tail;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
int main()
{

    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while(true)
    {
        cin >> val;
        if(val == -1)
        {
            break;
        }
        insertAtTail(head, tail, val);

    }
    reverseDLL(head, tail);
    printForward(head);
    // printBackward(tail);

    return 0;
}