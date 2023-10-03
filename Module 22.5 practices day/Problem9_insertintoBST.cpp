#include <bits/stdc++.h> 

void insert(TreeNode<int>* &root,int x){
    if(root == NULL){
        root = new TreeNode<int>(x);
        return;
    }
    if(x < root->val){
        if(root->left == NULL){
            root->left = new TreeNode<int>(x);
        }
        else{
            insert(root->left,x);
        }
    }
    else{
        if(root->right == NULL){
            root->right = new TreeNode<int>(x);
        }
        else{
            insert(root->right,x);
        }
    }
}
TreeNode<int>* insertionInBST(TreeNode<int>* root, int val)
{
    // Write your code here.
    insert(root,val);
    return root;
}