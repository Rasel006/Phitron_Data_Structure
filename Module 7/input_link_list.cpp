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
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(true) //O(n)
    {
        cin >> val;
        if(val == -1) break;
        inserAtTailOptmly(head, tail, val); //O(1) 
        //previous function was O(n)
    }
    printLinkedList(head);
    return 0;
}