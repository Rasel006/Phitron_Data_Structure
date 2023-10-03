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
int getSize(Node* head)
{
    Node* tmp = head;
    int cnt  = 0;
    while(tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
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
bool compare(Node* head, Node* nhead)
{
    if(getSize(head) != getSize(nhead))
    {
        return false;
    }
    else 
    {
        Node* tmp = head;
        Node* tmp1 = nhead;
        while(tmp != NULL)
        {
            if(tmp->val != tmp1->val)
            {
                return false;
            }
            tmp = tmp->next;
            tmp1 = tmp1->next;
        }
        return true;
    }
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
    // cout << getSize(head) << endl;
    // printForward(head);
    // printBackward(tail);

    Node* nhead = NULL;
    Node* ntail = NULL;
    int nval;
    while(true)
    {
        cin >> nval;
        if(nval == -1)
        {
            break;
        }
        insertAtTail(nhead, ntail, nval);

    }

    if(compare(head, nhead) == true) cout << "YES" << endl;
    else cout << "NO" << endl;
    // cout << getSize(nhead) << endl;
    // printForward(nhead);
    // printBackward(ntail);

    return 0;
}