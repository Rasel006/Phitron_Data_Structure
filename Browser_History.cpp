#include<bits/stdc++.h>

using namespace std;
class Node
{
    public:
        string val;
        Node*prev;
        Node*next;
        
        Node(string val)
        {
            this->val=val;
            this->prev=NULL;
            this->next=NULL;
        }
};
void insert_tail(Node* &head,Node* &tail,string val)
{
    Node* newNode=new Node(val);
    if(tail==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
}
void print(Node* head)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void visit_search(Node* head,Node* &cur,string site)
{
    Node* tmp=head;
    bool found=false; 
   
    while(tmp!=NULL)
    {
        if(tmp->val==site)
        {
            found=true;
           cur=tmp;
           break;
        }
        tmp=tmp->next;
    }
    if(found)
    {
        cout<<cur->val<<endl;

    }
    else
    {
        cout<<"Not Available"<<endl;
    }
}
void next_web(Node*&cur)
{
    if(cur->next!=NULL)
    {
        cout<<cur->next->val<<endl;
        cur=cur->next;
    }
    else
    {
        cout<<"Not Available"<<endl;
    }

}
void prev_web(Node*&cur)
{
    if(cur->prev!=NULL)
    {
        cout<<cur->prev->val<<endl;
        cur=cur->prev;
    }
    else
    {
        cout<<"Not Available"<<endl;
    }

}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    Node* cur=NULL;
    string val;
    while(true)
    {
        cin>>val;
        if(val=="end")
            break;
       insert_tail(head,tail,val);
    }
    int quires;
    cin>>quires;
    while(quires--)
    {
        string address;

        cin>>address;
        if(address=="visit")
        {
            string site;
            cin>>site;
            visit_search(head,cur,site);
        }
        else if(address=="next")
        {
            next_web(cur);
        }
        else if(address =="prev")
        {
            prev_web(cur);
        }

    }

   
    

   
    return 0;
}