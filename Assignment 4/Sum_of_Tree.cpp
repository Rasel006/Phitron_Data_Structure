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
Node* binarytree()
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
        Node* p=k.front();
        k.pop();
        
        int l,r;
        cin>>l>>r;
        Node*left;
        Node*right;
        
        if(l==-1)left=NULL;
        else left=new Node(l);
        
        if(r==-1)right=NULL;
        else right=new Node(r);
        p->left=left;
        p->right=right;
        
        if(p->left)k.push(left);
        if(p->right)k.push(right);
    }
    
return rt;
}
int main()
{
    Node* rt =binarytree();
    int sum=0;
    queue<Node*>k;
    if(rt)k.push(rt);
    while (!k.empty())
    {
        Node*p=k.front();
        k.pop();
        sum+=p->val;
        if(p->left)k.push(p->left);
        if(p->right)k.push(p->right);
    }
    cout<<sum<<endl;
    return 0;
}
