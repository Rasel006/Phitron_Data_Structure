#include <bits/stdc++.h> 
vector<int> v;
void postOrder(TreeNode* root)
{
    if(root == NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    v.push_back(root->val);
}
vector<int> postorderTraversal(TreeNode* root)
{
    v.clear();
    postOrder(root);
    return v;
}