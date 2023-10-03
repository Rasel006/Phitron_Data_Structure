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

class Linked_List
{
    public:
        Node *head;
        Node *tail;

    Linked_List()
    {
        head=NULL;
        tail=NULL;
    }

    void insert_head(int val)
    {
        Node *newNode=new Node(val);
        if (head==NULL)
        {
            head=newNode;
            tail=newNode;
        }
        else
        {
            newNode->next=head;
            head=newNode;
        }
    }

    void insert_tail(int val)
    {
        Node *newNode=new Node(val);
        if (head==NULL)
        {
            head=newNode;
            tail=newNode;
        }
        else
        {
            tail->next=newNode;
            tail=newNode;
        }
    }
};

int main()
{
    int g;
    cin>>g;

    Linked_List list;

    for (int i=0; i<g;i++)
    {
        int d, e;
        cin>>d>>e;

        if (d==0)
        {
            list.insert_head(e);
        }
        else if(d==1)
        {
            list.insert_tail(e);
        }

        cout<<list.head->val<<" "<<list.tail->val<<endl;
    }

    return 0;
}
