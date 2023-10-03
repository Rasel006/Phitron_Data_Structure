#include <bits/stdc++.h> 
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
vector<int> v;
void inOrder(TreeNode* root)
{
    if(root == NULL) return;
    inOrder(root->left);
    v.push_back(root->data);
    inOrder(root->right);
}
vector<int> getInOrderTraversal(TreeNode *root)
{
    v.clear();
    inOrder(root);
    return v;
}