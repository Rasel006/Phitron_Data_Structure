#include <bits/stdc++.h>
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
    newNode->next=head;
    head=newNode;
}

void selection_Sort(Node *head)
{
    Node *temp=head;
    while(temp)
    {
        Node *maxNode=temp;
        Node *searchNode=temp->next;

        while(searchNode)
        {
            if(searchNode->val>maxNode->val)
            {
                maxNode=searchNode;
            }
            searchNode=searchNode->next;
        }

        swap(temp->val,maxNode->val);
        temp=temp->next;
    }
}

int countNodes(Node *head)
{
    int count=0;
    Node *temp=head;
    while(temp)
    {
        count++;
        temp=temp->next;
    }
    return count;
}

void find_Middle_Elements(Node *head)
{
    int n=countNodes(head);
    Node *temp=head;
    int mid=n/2;

    if(n%2==0)
    {
        while(mid>1)
        {
            temp=temp->next;
            mid--;
        }
        cout<<temp->val<<" "<<temp->next->val;
    }
    else
    {
        while(mid> 0)
        {
            temp=temp->next;
            mid--;
        }
        cout<<temp->val;
    }
}

void delete_Linked_List(Node *head)
{
    while(head)
    {
        Node *temp=head;
        head=head->next;
        delete temp;
    }
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

    selection_Sort(head);
    find_Middle_Elements(head);

    delete_Linked_List(head);
    return 0;
}
