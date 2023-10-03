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

             10
        
        /         \

       20             60

    /      \         /    \

   30       50      70     -1

 /   \     /    \   /   \   

-1   40   -1   -1  -1  -1

    /  \

   80  -1

  /   \
-1    -1



*/

BinNode* inputTree()
{
    int val;
    cin >> val;
    BinNode* root;
    if(val == -1) root = NULL;
    else root = new BinNode(val);
    queue<BinNode*> qu;
    if(root) qu.push(root);
    while(!qu.empty())
    {
        //1. pick from queue
        BinNode* parent = qu.front();
        qu.pop();

        //2. Required Work
        int l, r;
        cin >> l >> r;
        BinNode* myLeft;
        BinNode* myRight;
        if(l == -1)
            myLeft = NULL;
        else
            myLeft = new BinNode(l);

        if(r == -1)
            myRight = NULL;
        else
            myRight = new BinNode(r);

        //Connection
        parent->left = myLeft;
        parent->right = myRight;
        //3. Push the children
        if(parent->left)
            qu.push(parent->left);
        if(parent->right)
            qu.push(parent->right);

    }

    return root;
}
int cntLeaf(BinNode* root)
{
    if(root == NULL) return 0;
    if(root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    else{
        int l = cntLeaf(root->left);
        int r = cntLeaf(root->right);
        return l + r;
    }
}
int main()

{

    BinNode* root = inputTree();
    cout << cntLeaf(root) << endl;
    return 0;

   
}