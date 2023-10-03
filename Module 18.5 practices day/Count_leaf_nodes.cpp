
int leaf_node(BinaryTreeNode<int> *root){
    if(root == NULL){
        return 0;
    }
    else if(root->left == NULL && root->right == NULL){
        return 1;
    }
    else{
        int l = leaf_node(root->left);
        int r = leaf_node(root->right);
        return l + r;
    }
}
int noOfLeafNodes(BinaryTreeNode<int> *root){
    // Write your code here.
    int result = leaf_node(root);
    return result;
}