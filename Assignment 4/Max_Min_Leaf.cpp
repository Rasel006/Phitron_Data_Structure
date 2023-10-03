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
Node* Binarytree(){
    int val;
    cin>>val;
    Node* rt;
    if(val==-1)rt=NULL;
    else rt= new Node(val);
    queue<Node*>k;
    if(rt)k.push(rt);
    while(!k.empty())
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
int Max(Node* rt)
{
    int mx=INT_MIN;
     queue<Node*>k;
    if(rt)k.push(rt);
    while(!k.empty())
    {
        Node*d=k.front();
        k.pop();
        if(d->left==NULL && d->right==NULL)
        {
            if(mx<d->val) mx=d->val;
        }
        if(d->left)k.push(d->left);
        if(d->right)k.push(d->right);
    }
    return mx;
}
int Min(Node* rt)
{
    int mn=INT_MAX;
     queue<Node*>k;
    if(rt)k.push(rt);
    while(!k.empty())
    {
        Node*d= k.front();
        k.pop();
        if(d->left==NULL && d->right==NULL)
        {
           if(mn>d->val) mn=d->val;
        }
        
        if(d->left)k.push(d->left);
        if(d->right)k.push(d->right);
    }
    return mn;
}
int main ()
{
    Node* rt =Binarytree();
    int mx=Max(rt);
    int mn=Min(rt);
    cout<<mx<<" "<<mn;
    return 0;
}