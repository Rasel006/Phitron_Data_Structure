#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;

    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};

void insert(Node* &head,int val)
{
    Node* newNode=new Node(val);
    newNode->next=head;
    head=newNode;
}

bool palindrome(Node* head)
{
    if(head==NULL|| head->next==NULL)
        return true;

    Node* slow=head;
    Node* fast=head;
    Node* prev=NULL;
    Node* mid=NULL;

    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;

        Node* next=slow->next;
        slow->next=prev;
        prev=slow;
        slow=next;
    }

    if(fast!=NULL)
    {
        mid=slow;
        slow=slow->next;
    }

    while(prev!=NULL && slow!=NULL)
    {
        if(prev->val!=slow->val)
            return false;

        prev=prev->next;
        slow=slow->next;
    }

    while(mid!=NULL)
    {
        Node* next=mid->next;
        mid->next=prev;
        prev=mid;
        mid=next;
    }

    return true;
}

int main()
{
    Node* head=NULL;
    int val;

    while(true)
    {
        cin>>val;
        if(val==-1)
            break;

        insert(head,val);
    }

    if(palindrome(head))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

    return 0;
}
