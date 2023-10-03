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

void insert_tail(Node* &head,int val)
{
    Node* newNode=new Node(val);

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

bool Same(Node* head1,Node* head2)
{
    while(head1!=NULL && head2 !=NULL)
    {
        if (head1->val!=head2->val)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    return(head1==NULL && head2==NULL);
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

int main(){
    Node* head1=NULL;
    Node* head2=NULL;
    int val;

    while(cin>>val && val!=-1)
    {
        insert_tail(head1,val);
    }

    while(cin>>val && val!=-1)
    {
        insert_tail(head2,val);
    }

    if(Same(head1,head2))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    delete_Linked_List(head1);
    delete_Linked_List(head2);

    return 0;
}
