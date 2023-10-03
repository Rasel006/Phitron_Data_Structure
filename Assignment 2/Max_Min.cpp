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
    newNode->next=NULL;

    if(head==NULL)
    {
        head=newNode;
    }
    else
    {
        Node* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newNode;
    }
}

void MaxMin(Node* head, int &maxval, int &minval)
{
    if (head==NULL)
    {
        maxval = minval = -1;
        return;
    }

    maxval = minval = head->val;
    Node* temp = head->next;

    while (temp != NULL)
    {
        maxval = max(maxval, temp->val);
        minval = min(minval, temp->val);
        temp = temp->next;
    }
}

void delete_Linked_List(Node* &head)
{
    while(head!=NULL)
    {
        Node* temp=head;
        head=head->next;
        delete temp;
    }
}

int main()
{
    Node* head=NULL;
    int val;

    while(cin>>val && val!=-1)
    {
        insert(head,val);
    }

    int maxval,minval;
    MaxMin(head,maxval,minval);

    cout<<maxval<<" "<<minval<<endl;

    delete_Linked_List(head);

    return 0;
}
