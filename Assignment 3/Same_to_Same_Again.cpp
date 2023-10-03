#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node*prev;
        Node*next;
        
        Node(int val)
        {
            this->val=val;
            this->prev=NULL;
            this->next=NULL;
        }
};
class myStack
{
    public:
        Node* head=NULL;
        Node* tail=NULL;
    int sz=0;
    void push(int val)
    {
        sz++;
        Node* newNode=new Node(val);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
            return;
        }
        newNode->prev=tail;
        tail->next = newNode;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node* deleteNode=tail;
        tail=tail->prev;
        if(tail==NULL)
        {
            head=NULL;
        }
        else
        {
            tail->next=NULL;
        }

        delete deleteNode;
    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if(sz==0)
            return true;
        else
            return false;
    }
};
class myQueue
{
    public:
        Node* head=NULL;
        Node* tail=NULL;
        int sz=0;

        void Push(int val)
        {
            sz++;
            Node* newNode=new Node(val);
            if(head==NULL)
            {
                head=newNode;
                tail=newNode; 
                return;
            }
            tail->next=newNode;
            newNode->prev=tail;
            tail=tail->next;

        }
        void pop()
        {
            sz--;
            Node* deleteNode=head;
            head=head->next;
            if(head==NULL) tail=NULL;
            else
            {
                head->prev=NULL;
                delete deleteNode;
            }
        }

    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if(sz==0)
            return true;
        else
            return false;
    }
};
int main ()
{
    myStack st;
    myQueue q;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        st.push(val);
    }
    for(int i=0;i<m;i++)
    {
        int val;
        cin>>val;
        q.Push(val);
    }
    if(st.size()!=q.size())
    {
        cout<<"NO"<<endl;
    }
    else{
        bool flag=true;
        while(!st.empty())
        {
            int x=st.top();
            int y=q.front();
            
            if(x!=y) flag=false;
            st.pop();
            q.pop();
        }
        if(flag) 
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }


    return 0;
}