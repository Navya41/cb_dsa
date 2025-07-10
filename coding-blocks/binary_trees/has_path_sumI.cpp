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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root==NULL) return false;
        if (root->left == NULL and root->right==NULL){
            if (root->val == targetSum) return true;
        }
        int need = targetSum - root->val;
        bool l = hasPathSum(root->left,need);
        bool r = hasPathSum(root->right,need);
        return l || r;
        
    }
};