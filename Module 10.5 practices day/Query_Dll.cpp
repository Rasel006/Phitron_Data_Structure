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
int getSize(Node* head)
{
    Node* tmp = head;
    int cnt = 0;
    while(tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void insertAtHead(Node*& head, Node*&tail, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;

}
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
void insertAtAnyPosition(Node*& head, Node*& tail, int pos, int val)
{
    Node* newNode = new Node(val);
    Node* tmp = head;
    // if(pos < 0 || pos >getSize(head))
    // {
    //     cout << "Invalid" << endl;
    //     return;
    // }
    if(pos == 0)
    {
        insertAtHead(head, tail, val);
    }
    else if(pos == getSize(head))
    {
        insertAtTail(head, tail, val);
    }
    else
    {
        for(int i = 1; i <= pos - 1; i++)
        {
            tmp = tmp->next;
        }
        newNode->next = tmp->next;
        tmp->next->prev = newNode;
        tmp->next = newNode;
        newNode->prev = tmp;
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
void printListBackward(Node* tail)
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
    int q;
    cin >> q;
    while(q--)
    {
        int x, v;
        cin >> x >> v;
        if(x < 0 || x >getSize(head))
        {
            cout << "Invalid" << endl;
        }
        else
        {
            insertAtAnyPosition(head, tail, x, v);
            printListForward(head);
            printListBackward(tail);
        }
    
    }
    return 0;
}