#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* prev;
        Node* next;
    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
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
void sortDLL(Node* head)
{
    Node* tmp = head;
    for(Node* i = tmp; i->next != NULL; i = i->next)
    {
        for(Node* j = i->next; j != NULL; j = j->next)
        {
            if(i->val > j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
}
void printListForward(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if(val == -1) break;
        insertAtTail(head, tail, val);
    }
    sortDLL(head);
    printListForward(head);

    return 0;
}