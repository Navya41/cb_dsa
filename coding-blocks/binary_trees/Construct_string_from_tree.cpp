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
    string dfs(TreeNode* root){
        //base case
        if (root==NULL){
            return "";
        }
        //recursive case
        string lstr = dfs(root->left);
        string rstr = dfs(root->right);
        if (root->left!=NULL and root->right!=NULL){
            return to_string(root->val) + "(" + lstr + ")(" + rstr + ")";
        } else if (root->right!=NULL){
            return to_string(root->val) + "()(" + rstr + ")";
        } else if (root->left!=NULL){
            return to_string(root->val) + "(" + lstr + ")";
        } else {
            return to_string(root->val);
        }
    }

    string tree2str(TreeNode* root) {
        return dfs(root);
    }
};