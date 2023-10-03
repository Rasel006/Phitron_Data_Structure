#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};

void insert(Node *&head,int val)
{
    Node *newNode=new Node(val);
    if (head==NULL)
    {
        head=newNode;
    }
    else
    {
        Node *temp=head;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newNode;
    }
}

void print_Linked_List(Node *head)
{
    Node *temp=head;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void print_Reverse_Linked_List(Node *head)
{
    if (head==NULL)
    {
        return;
    }
    print_Reverse_Linked_List(head->next);
    cout<<head->val<< " ";
}

int main()
{
    Node *head=NULL;
    int val;

    while(true)
    {
        cin>>val;
        if(val==-1)
            break;

        insert(head,val);
    }

    print_Reverse_Linked_List(head);
    cout<<endl;
    print_Linked_List(head);

    return 0;
}


