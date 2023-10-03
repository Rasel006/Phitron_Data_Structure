#include <bits/stdc++.h> 


long long leftSum(BinaryTreeNode<int> *root)
{
	// Write your code here.
	if(root == NULL){
        return 0;
    }
    
    long long sum = 0;
    
    if(root->left != NULL){
        sum += root->left->data;
        sum += leftSum(root->left);
    }
    
    sum += leftSum(root->right);
    
    return sum;
}