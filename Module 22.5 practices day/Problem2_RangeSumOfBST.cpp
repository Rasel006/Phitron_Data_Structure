
class Solution {
public:
    void pushNode(TreeNode* root, vector<int>& vec)
    {
        if(root == NULL) return;
        vec.push_back(root->val);
        pushNode(root->left, vec);
        pushNode(root->right, vec);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int> vec;
        pushNode(root, vec);
        sort(vec.begin(), vec.end());
        int sum = 0;
        for(int i = 0; i < vec.size(); i++)
        {
            if(vec[i] >= low && vec[i] <= high)
                sum += vec[i];
        }
        return sum;
    }
};