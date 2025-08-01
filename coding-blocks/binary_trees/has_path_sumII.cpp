/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode* root, int targetSum, vector<int>& path, vector<vector<int>>& allPaths){
        if (root==NULL) return;
        if (root->left==NULL and root->right==NULL){
            if (root->val == targetSum) {
                path.push_back(root->val);
                allPaths.push_back(path);
                path.pop_back();
                return;
            } else {
                return;
            }
        }

        path.push_back(root->val);
        dfs(root->left, targetSum-root->val, path, allPaths);
        dfs(root->right, targetSum-root->val, path, allPaths);
        path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> path;
        vector<vector<int>> allPaths;
        dfs(root, targetSum, path, allPaths);
        return allPaths;
    }
};