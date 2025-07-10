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
    int computeHeight(TreeNode* root){
        if (root==NULL) return -1;
        int h = max(computeHeight(root->left),computeHeight(root->right));
        return 1+h;
    }
    bool isBalanced(TreeNode* root) {
        if (root==NULL) {
            return true;
        }
        //recurisve case
        bool leftbal = isBalanced(root->left);
        bool rightbal = isBalanced(root->right);
        bool rootbal = abs(computeHeight(root->left) - computeHeight(root->right)) <= 1? true : false;
        return leftbal and rightbal and rootbal;
    }
};