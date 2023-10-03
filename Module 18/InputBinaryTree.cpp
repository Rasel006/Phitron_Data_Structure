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

 /   \    /    \   /   \   

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
void printLevelOrder(BinNode* root)
{
    if(root == NULL) 
    {
        cout << "Tree Not Available" <<endl;
        return;
    }
    queue<BinNode*> qu;
    qu.push(root);
    while(!qu.empty())
    {   
        //1. Pick from Line
        BinNode* f = qu.front();
        qu.pop();

        //2. All required work
        cout << f->val << " ";

        //3. Put their children into Line if children exits
        if(f->left) qu.push(f->left); //Or,  if(f->left) qu.push(f->left)
        if(f->right) qu.push(f->right); //Or, if(f->right) qu.push(f->right)
    }
}
int main()
{

    BinNode* root = inputTree();
    printLevelOrder(root);
    return 0;
}