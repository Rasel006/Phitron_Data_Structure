
class Solution {
public:
    int sum = 0;
    int getSum(TreeNode* root)
    {
       
       if(root == NULL) return 0;
       int l = getSum(root->left);
       int r = getSum(root->right);
       int x = root->val + l + r;
       sum = sum + abs(l - r);
       return x;
        
    }
    int findTilt(TreeNode* root) {
        
        getSum(root);
        return sum;

    }
};