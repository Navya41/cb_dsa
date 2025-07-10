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

bool flag = false;
void pathToNode(TreeNode* root, int node, vector<int>& path){
    if (root==NULL) return;
    if (root->left==NULL and root->right==NULL){
        if (root->val == node){
            path.push_back(root->val);
            flag = true;
            return;
        } 
    }
    path.push_back(root->val);
    pathToNode(root->left, node, path);
    if (flag==true) return;
    pathToNode(root->right, node, path);
    if (flag==true) return;
    path.pop_back();
}

int main() {
	TreeNode* root = NULL;
	root = new TreeNode(2);
	root->left = new TreeNode(7);
	root->right = new TreeNode(6);
	root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(8);
    root->right->right = new TreeNode(5);
    root->right->left = new TreeNode(4);
    root->left->left->left = new TreeNode(1);
    root->left->left->right = new TreeNode(9);
    
    vector<int> path;
    pathToNode(root,8,path);
    for(int x : path){
        cout << x << " ";
    }
    return 0;
}


