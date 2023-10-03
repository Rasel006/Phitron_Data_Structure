
class Solution {
public:
    queue<TreeNode*> q;
    void inorder(TreeNode* root){
        if(root == NULL){
            return;
        }
        inorder(root->left);
        q.push(root);
        inorder(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        if(root == NULL){
            return NULL;
        }
        inorder(root);
        root = q.front();
        q.pop();
        TreeNode* temp = root;
        while(!q.empty()){
            TreeNode* f = q.front();
            q.pop();

            temp->left = NULL;
            temp->right = f;
            temp = temp->right;

        }
        temp->left = NULL;
        temp->right = NULL;
        return root;
    }
};