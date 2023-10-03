
class Solution {
public:
    vector<int> v1;
    vector<int> v2;
    void pre1(TreeNode* root1)
    {
        if(root1 == NULL) return;
        
        pre1(root1->left);
        if(root1->left == NULL && root1->right == NULL)
        {
            v1.push_back(root1->val);
        }
        pre1(root1->right);
    }
    void pre2(TreeNode* root2)
    {
        if(root2 == NULL) return;
        
        pre2(root2->left);
        if(root2->left == NULL && root2->right == NULL)
        {
            v2.push_back(root2->val);
        }
        pre2(root2->right);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        pre1(root1);
        pre2(root2);
        // if(v1.size() != v2.size()) return false;
        // else
        // {
        //     for(int i = 0; i < v2.size(); i++)
        //     {
        //         if(v1[i] != v2[i]) return false;
        //     }
        //     return true;
        // }
        return v1 == v2;
    }
};