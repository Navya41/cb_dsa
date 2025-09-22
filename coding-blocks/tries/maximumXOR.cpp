class node{
    public:
    node* left;
    node* right;
    node(){
        this->left = NULL;
        this->right = NULL;
    }
};
class trie{
    node* root;
    public:
    trie (){
        root = new node();
    }
    void insert(int n){
        node* cur = root;
        for (int k=31; k>=0; k--){
            int kthBit = (n>>k) & 1;
            if (kthBit==0){
                if (cur->left==NULL){
                    cur->left = new node();
                } 
                cur = cur->left;
            } else {
                if (cur->right==NULL){
                    cur->right = new node();
                }
                cur = cur->right;
            }
        }
    }
    int helper (int n){
        int ans = 0;
        node* cur = root;
        for (int k= 31; k>=0; k--){
            int kthBit = (n>>k) & 1;
            if (kthBit == 0){
                if (cur->right != NULL){
                    ans = ans|(1<<k);
                    cur = cur->right;
                } else {
                    cur = cur->left;
                }
            } else {
                if (cur->left != NULL){
                    ans = ans|(1<<k);
                    cur = cur->left;
                } else {
                    cur = cur->right;
                }
            }
        }
        return ans;
    }
    int maximumXOR(vector<int>& nums, int n){
        int maxSoFar = 0;
        for (int i=0; i<n; i++){
            maxSoFar = max(maxSoFar, helper(nums[i]));
        }
        return maxSoFar;
    }
};
class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        trie t;
        int n = nums.size();
        for (int x : nums){
            t.insert(x);
        }
        return t.maximumXOR(nums,n);
    }
};