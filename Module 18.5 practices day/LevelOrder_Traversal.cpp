#include <bits/stdc++.h> 

vector<int> v;
void level_order(BinaryTreeNode<int> *root){
    if(root == NULL){
        return;
    }
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(!q.empty()){
        BinaryTreeNode<int>* f = q.front();
        q.pop();

        v.push_back(f->val);

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
}
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    //  Write your code here.
    v.clear();
    level_order(root);
    return v;
}