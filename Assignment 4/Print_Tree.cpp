#include<bits/stdc++.h>

using namespace std;

class Node
{
    public:
        int val;
        Node* left;
        Node* right;
        
        Node(int val)
        {
            this->val=val;
            this->left=NULL;
            this->right=NULL;
        }
};
Node*Binarytree()
{
    int val;
    cin>>val;
    Node* rt;
    if(val==-1)rt=NULL;
    else rt= new Node(val);
    queue<Node*>k;
    if(rt)k.push(rt);
    while (!k.empty())
    {
        Node* d=k.front();
        k.pop();
        int l,r;
        cin>>l>>r;
        Node* left;
        Node* right;
        if(l==-1)left=NULL;
        else left=new Node(l);
        if(r==-1)right=NULL;
        else right=new Node(r);
        d->left=left;
        d->right=right;
        if(d->left)k.push(left);
        if(d->right)k.push(right);
    }
    
return rt;
}
void print_reverse(Node* rt)
{
    queue<int>m;
    queue<Node*>k;
    stack<int>st;
    if(rt)k.push(rt);
    while(!k.empty())
    {
        Node*d=k.front();
        k.pop();
        m.push(d->val);
        if(d->right)k.push(d->right);
        if(d->left)k.push(d->left);
    }
    
    while(!m.empty())
    {
        
        st.push(m.front());
        m.pop();
    }
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    
    
}

int main()
{
    Node* rt=Binarytree();
   print_reverse(rt);
    return 0;
}
