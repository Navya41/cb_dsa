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
    q.push(NULL);
    while (!q.empty()){
        TreeNode* front = q.front();
        q.pop();
        if (front == NULL){
            cout << endl;
            if (!q.empty()){
                q.push(NULL);
            }
        } else{
            cout << front->val << " ";
            if (front->left != NULL){
                q.push(front->left);
            }
            if (front->right!=NULL){
                q.push(front->right);
            }
        }
    }
}

TreeNode* buildTree(){
    int n;
    cin >> n;
    TreeNode* root = new TreeNode(n);
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        TreeNode* front = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        if (l!=-1){
            TreeNode* leftChild = new TreeNode(l);
            front->left = leftChild;
            q.push(leftChild);
        } 
        if (r!=-1){
            TreeNode* rightChild = new TreeNode(r);
            front->right = rightChild;
            q.push(rightChild);
        } 
    }
    return root;
}

int main() {
	TreeNode* root = NULL;
	root = buildTree();
    printLevelOrder(root);
    return 0;
}
