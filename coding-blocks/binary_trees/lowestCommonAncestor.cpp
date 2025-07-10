/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root==NULL) return root;
        if (root==p) return p;
        if (root==q) return q;
        TreeNode* l = lowestCommonAncestor(root->left, p, q);
        TreeNode* r = lowestCommonAncestor(root->right, p, q);
        if (l!=NULL and r==NULL) return l;
        else if (r!=NULL and l==NULL) return r;
        else if (l!=NULL and r!=NULL) return root;
        else return NULL;
    }
};