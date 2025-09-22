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
    map<string, TreeNode*> TreeMap;
    set<TreeNode*> ans;
    string dfs (TreeNode* root){
        //base case
        if (root==NULL) return "";
        //recursive case
        string leftRep = dfs (root->left);
        string rightRep = dfs(root->right);

        string treeRep = to_string(root->val) + "/" + leftRep + "/" + rightRep;
        if (TreeMap.find(treeRep) != TreeMap.end()){
            ans.insert(TreeMap[treeRep]);
        }
        else {
            TreeMap[treeRep] = root;
        }
        return treeRep;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        dfs(root);
        return vector<TreeNode*> (ans.begin(), ans.end());
    }
};