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
int cnt_max_hight(Node* rt)
{ 
    if(rt==NULL) return 0;
    int l=cnt_max_hight(rt->left);
    int r=cnt_max_hight(rt->right);
    return max(l,r)+1;

}
int element=0;
void cnt(Node* rt)
{
    if(rt==NULL) return;
    element++;
    if(rt->left)cnt(rt->left);
    if(rt->right)cnt(rt->right);
}
int main ()
{
    Node* rt =Binarytree();
    cnt(rt);
    int h=cnt_max_hight(rt);
    if (pow(2,h)-1== element)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}