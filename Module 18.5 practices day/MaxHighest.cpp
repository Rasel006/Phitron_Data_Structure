#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int countTheheight(TreeNode<int>* root){
    if(root == NULL) return 0;

    int leftC = countTheheight(root->left);
    int rightC = countTheheight(root->right);

    return max(leftC, rightC) + 1;

}
int maxDepth(TreeNode<int> *root) {

    int height = countTheheight(root) - 1; 
    return height;
}