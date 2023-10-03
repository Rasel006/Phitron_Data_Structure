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
bool isPalindrome(Node* head, Node* tail)
{
    Node* i = head;
    Node* j = tail;
    while(i != j && i->next != j)
    {
        if(i->val != j->val)
        {
            return false;
        }
        i = i->next;
        j = j->prev;
    }
    if(i->val != j->val)
    {
        return false;
    }
    return true;
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
    if(isPalindrome(head, tail) == true) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}