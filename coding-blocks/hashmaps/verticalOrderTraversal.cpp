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

void dfs (TreeNode* root, int d, map<int,vector<int>>& distMap){
    //base case 
    if (root==NULL) return;
    //recursive case
    distMap[d].push_back(root->val);
    dfs(root->left, d-1, distMap);
    dfs(root->right, d+1, distMap);
}

int main() {
	TreeNode* root = NULL;
	root = buildTree();
    map <int, vector<int>> distMap;
    dfs (root, 0, distMap);
    for (auto [dist, node] : distMap){
        for (auto n : node){
            cout << n << " ";
        }
        cout << endl;
    }
    return 0;
}
