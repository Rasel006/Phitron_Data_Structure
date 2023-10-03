#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        bool isOriginal;
        TreeNode<T> *left;
        TreeNode<T> *right;
        
        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int nodeLevel(TreeNode<int>* root, int searchedValue)
{
    // Write your code here.
   queue<pair<TreeNode<int>*, int>> qu;
//    qu.push(make_pair(root, 1));
   qu.push({root, 1});
   while(!qu.empty())
   {
       pair<TreeNode<int>*, int> pr = qu.front();
       TreeNode<int>* node = pr.first;
       int lvl = pr.second;
       qu.pop();
       
       if(node->val ==searchedValue ) return lvl;
       
       if(node->left) qu.push({node->left, lvl+1});
       if(node->right) qu.push({node->right, lvl+1});
   }
}