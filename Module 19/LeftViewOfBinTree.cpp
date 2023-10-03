#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
    bool freq[3005] = {false};
    queue<pair<TreeNode<int> *, int>> qu;
    vector<int> v;
    if(root) qu.push({root, 1});
    while(!qu.empty())
    {
        pair<TreeNode<int> *, int> pr = qu.front();
        qu.pop();
        TreeNode<int>* node = pr.first;
        int lvl = pr.second;

        if(freq[lvl] == false)
        {
            v.push_back(node->data);
            freq[lvl] = true;
        }

        if(node->left) qu.push({node->left, lvl+1});
        if(node->right) qu.push({node->right, lvl+1});
    }
    return v;
}