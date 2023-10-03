

bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    // Write your code here
    bool flag = false;
    if(root == NULL){
        return flag;
    }
    if(root->data == x){
        flag = true;
        return flag;
    }
    bool l = isNodePresent(root->left,x);
    bool r = isNodePresent(root->right,x);
    return l || r;
}