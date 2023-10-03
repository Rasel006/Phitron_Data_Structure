#include<bits/stdc++.h>
using namespace std;
class BinNode
{
    public:
        int val;
        BinNode* left;
        BinNode* right;
    BinNode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }    

};

/*

My Custom Binary Tree Design

             10  ---> Root

        /          \
      20(a)       30(b)

    /     \            \
 40(c)    90(h)        50(d)

    \        \         /   \
    60(e)   100(i)  70(f)  80(g) 

*/

void printPostOrder(BinNode* root)
{
    if(root == NULL) return;
    printPostOrder(root->left);
    printPostOrder(root->right);
    cout << root->val << " ";
}
int main()
{

    BinNode* root = new BinNode(10);
    BinNode* a = new BinNode(20);
    BinNode* b = new BinNode(30);
    BinNode* c = new BinNode(40);
    BinNode* d = new BinNode(50);
    BinNode* e = new BinNode(60);
    BinNode* f = new BinNode(70);
    BinNode* g = new BinNode(80);
    BinNode* h = new BinNode(90);
    BinNode* i = new BinNode(100);

    //Connection--->
    root->left = a;
    root->right = b;

    a->left = c;
    a->right = h;

    b->right = d;

    c->right = e;

    h->right = i;

    d->left = f;
    d->right = g;

    printPostOrder(root);

    return 0;
}