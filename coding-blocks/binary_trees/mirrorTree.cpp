#include <bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void preorder (TreeNode* root){
    //base case
    if (root==NULL) {
        cout << -1 << " ";
        return;
    }
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}

TreeNode* buildTree(){
    int val;
    cin >> val;
    if (val==-1){
        return NULL;
    }
    TreeNode* root = new TreeNode(val);
    
    //recursively build the left sub Tree
    root->left = buildTree();
    //recursively build right sub tree
    root->right = buildTree();
    return root;
}

void mirrorTree (TreeNode* root){
    if (root==NULL) return;
    mirrorTree(root->left);
    mirrorTree(root->right);
    swap(root->left, root->right);
}

int main() {
	TreeNode* root = NULL;
	root = buildTree();
    
    preorder(root);
    cout << endl;
    mirrorTree(root);
    preorder(root);
    return 0;
}
