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

void printLevelOrder(TreeNode* root){
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()){
        TreeNode* front = q.front();
        q.pop();
        cout << front->val << " ";
        if (front->left != NULL){
            q.push(front->left);
        }
        if (front->right!=NULL){
            q.push(front->right);
        }
    
    }
}

int main() {
	TreeNode* root = NULL;
	root = new TreeNode(10);
	root->left = new TreeNode(20);
	root->right = new TreeNode(30);
	root->left->left = new TreeNode(40);
    root->left->right = new TreeNode(50);
    root->right->right = new TreeNode(60);
    root->left->right->left = new TreeNode(70);
    printLevelOrder(root);
    return 0;
}
