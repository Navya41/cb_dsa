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

TreeNode* insert (TreeNode* root, int key){
    //base case
    if (root== NULL){
        return new TreeNode(key);
    }
    //recursive case
    if (key < root->val){
        root->left = insert(root->left, key);
    } else {
        root->right = insert(root->right, key);
    }
    return root;
}

bool search (TreeNode* root, int key){
    //base case
    if (root== NULL){
        return false;
    }
    if (root->val == key){
        return true;
    }
    else if (key < root->val){
        return search(root->left, key);
    } else {
        return search(root->right, key);
    }
    //return root;
}

TreeNode* findMin_iterative (TreeNode* root){
    while (root->left != NULL){
        root = root->left;
    }
    return root;
}
int findMin(TreeNode* root){
    if (root==NULL) return INT_MAX;
    if (root->left == NULL ) return root->val;
    findMin(root->left);
}
int findMax(TreeNode* root){
    if (root==NULL) return INT_MIN;
    if (root->right == NULL ) return root->val;
    findMax(root->right);
}
bool checkBST (TreeNode* root){
    if (root==NULL) return true;
    bool lft = checkBST(root->left);
    bool rgt = checkBST(root->right);
    bool bstatroot = root->val < findMin(root->right) and root->val > findMax(root->left) ? true : false;
    return lft and rgt and bstatroot;
}

class triple{
    public:
    bool isBST;
    int minVal;
    int maxVal;
};
triple checkBSTefficient(TreeNode* root){
    triple t;
    
    //base case
    if (root==NULL){
        t.isBST = true;
        t.minVal = INT_MAX;
        t.maxVal = INT_MIN;
        return t;
    }
    
    //recursive case
    triple left = checkBSTefficient(root->left);
    triple right = checkBSTefficient(root->right);
    bool bstPropAtRoot = root->val > left.maxVal and root->val < right.minVal ? true : false;
    
    t.isBST = left.isBST and right.isBST and bstPropAtRoot;
    t.minVal = min(left.minVal, min(right.minVal, root->val));
    t.maxVal = max(left.maxVal, max(right.maxVal, root->val));
    return t;
}

int main() {
	TreeNode* root = NULL;
	root = insert (root, 10);
	root = insert (root, 5);
	root = insert (root, 3);
	root = insert (root, 7);
	
	root = insert (root, 15);
	root = insert (root, 13);
	root = insert (root, 17);

	
	triple t = checkBSTefficient(root);
	t.isBST ? cout << "true" << endl : cout << "false" << endl;
	
	printLevelOrder(root);
	search(root, 17) ? cout << "true" << endl: cout << "false" <<endl;
	cout << findMin(root) << " " << findMax(root) << endl;
	checkBST(root) ? cout << "true" << endl : cout << "false" << endl;
    return 0;
}
