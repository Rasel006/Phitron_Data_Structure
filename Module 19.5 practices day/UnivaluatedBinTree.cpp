
class Solution {
public:
    bool y = true;
    void pre(TreeNode* root, int x)
    {
        if(root == NULL) return;
        pre(root->left, x);
        pre(root->right, x);
        if(root->val != x)
        {
            y = false;
            return;
        }
    }
    bool isUnivalTree(TreeNode* root) {
        pre(root, root->val);
        return y;
    }
};