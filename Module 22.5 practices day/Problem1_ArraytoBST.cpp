
class Solution {
public:
    TreeNode* func(vector<int> v, int l, int r)
    {
        if(l > r) return nullptr;
        int mid = (l + r) / 2;
        TreeNode* root = new TreeNode(v[mid]);
        TreeNode* leftT = func(v, l, mid - 1);
        TreeNode* rightT = func(v, mid + 1, r);
        root->left = leftT;
        root->right = rightT;
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& vec) {
        
        return func(vec, 0, vec.size() - 1);
    }
};