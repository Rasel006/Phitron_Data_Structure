#include<bits/stdc++.h>
using namespace std;
class BinNode
{
    public:
        int val;
        BinNode* left;
        BinNode* right;
    BinNode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }    

};
void printLevelOrder(BinNode* root)
{
    if(root == NULL) 
    {
        cout << "Tree Not Available" <<endl;
        return;
    }
    queue<BinNode*> qu;
    qu.push(root);
    while(!qu.empty())
    {   
        //1. Pick from Line
        BinNode* f = qu.front();
        qu.pop();

        //2. All required work
        cout << f->val << " ";

        //3. Put their children into Line if children exits
        if(f->left) qu.push(f->left); //Or,  if(f->left) qu.push(f->left)
        if(f->right) qu.push(f->right); //Or, if(f->right) qu.push(f->right)
    }
}
BinNode* convert(int *arr, int n, int l, int r) //O(n)
{
    if(l > r) return NULL;
    int mid = (l+r)/2;
    BinNode* root = new BinNode(arr[mid]);
    BinNode* leftRoot = convert(arr, n, l, mid - 1);
    BinNode* rightRoot = convert(arr, n, mid + 1, r);
    root->left = leftRoot;
    root->right = rightRoot;
    return root;
}
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    BinNode* root = convert(arr, n, 0, n - 1);
    printLevelOrder(root);
    return 0;
}