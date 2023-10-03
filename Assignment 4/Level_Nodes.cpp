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
Node* Binarytree()
{
    int val;
    cin>>val;
    Node* rt;
    if(val==-1)rt=NULL;
    else rt=new Node(val);
    queue<Node*>k;
    if(rt)k.push(rt);
    while(!k.empty())
    {
        Node*d=k.front();
        k.pop();
        int l,r;
        cin>>l>>r;
        Node* left;
        Node* right;
        if(l==-1)left=NULL;
        else left =new Node(l);
        if(r==-1)right=NULL;
        else right =new Node(r);
        d->left=left;
        d->right=right;
        if(d->left)k.push(left);
        if(d->right)k.push(right);
    }
    
return rt;
}
int print_level(Node* rt,int l0)
{

    queue<pair<Node*,int>>k;
    queue<int>l1
    k.push({rt,0});
    int l2=0;
    while(!k.empty())
    {
        pair<Node*,int>p=k.front();
        Node* node=p.first;
        int level=p.second;
        k.pop();
        if(l0==level)l1.push(node->val);
        l2=level;
        if(node->left)
        {
            k.push({node->left,level+1});
        }
         
        if(node->right)
        {
            k.push({node->right,level+1});
        }
    }
    while(!l1.empty())
    {
        cout<<l1.front()<<" ";
        l1.pop();
    }
    
    return l2;
}


int main ()
{
    Node* rt=Binarytree();
    int l3;
    cin>>l3;
    int l2=print_level(rt,l3);
    if(l2<l3)
    {
        cout<<"Invalid";
    };
    return 0;
}
