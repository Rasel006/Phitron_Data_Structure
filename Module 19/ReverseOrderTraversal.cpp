
#include<bits/stdc++.h>
vector<int> reverseLevelOrder(TreeNode<int> *root){
    vector<int> v;
    queue<TreeNode<int>*> qu;
    if(root) qu.push(root);
    while(!qu.empty())
    {
        TreeNode<int>* node = qu.front();
        qu.pop();

        v.push_back(node->val);

        if(node->left) qu.push(node->left);
        if(node->right) qu.push(node->right);
    }
    reverse(v.begin(), v.end());
    return v;
}