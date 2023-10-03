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

void remove_duplicates(Node* &head)
{
    if(head==NULL)
        return;

    Node* cur=head;

    while(cur!=NULL)
    {
        Node* prev=cur;

        while(prev->next!=NULL)
        {
            if(prev->next->val==cur->val)
            {
                Node* duplicate=prev->next;
                prev->next=prev->next->next;
                delete duplicate;
            }
            else
            {
               prev=prev->next;
            }
        }
        cur=cur->next;
    }
}

void print_linked_list(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<< " ";
        temp=temp->next;
    }
    cout<<endl;
}

void print_unique_sort_linked_list(Node* head)
{
    if(head==NULL)
        return;

    Node* unique_list=NULL;
    Node* temp=head;

    while(temp!=NULL)
    {
        bool duplicate=false;
        Node* check=unique_list;
        while(check!=NULL)
        {
            if(check->val==temp->val)
            {
                duplicate=true;
                break;
            }
            check=check->next;
        }

        if(!duplicate)
        {
            insert(unique_list,temp->val);
        }

        temp=temp->next;
    }

    Node* sorted_list=NULL;
    temp=unique_list;

    while(temp!=NULL)
    {
        Node* insert_point = sorted_list;
        Node* prev=NULL;

        while(insert_point!=NULL && temp->val>insert_point->val)
        {
            prev=insert_point;
            insert_point=insert_point->next;
        }

        Node* newNode=new Node(temp->val);
        newNode->next=insert_point;

        if(prev==NULL)
        {
            sorted_list=newNode;
        }
        else
        {
            prev->next=newNode;
        }

        temp=temp->next;
    }

    print_linked_list(sorted_list);
    while(unique_list!=NULL)
    {
        Node* temp=unique_list;
        unique_list=unique_list->next;
        delete temp;
    }
    while(sorted_list!=NULL)
    {
        Node* temp=sorted_list;
        sorted_list = sorted_list->next;
        delete temp;
    }
}

int main()
{
    Node* head=NULL;
    int val;

    while(true)
    {
        cin >> val;
        if(val==-1)
            break;

        insert(head, val);
    }

    remove_duplicates(head);
    print_unique_sort_linked_list(head);

    return 0;
}
