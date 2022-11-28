class Solution {
public:
    int sum;
    int rangeSumBST(TreeNode* root, int low, int high) {
        dfs(root, low, high);
        return sum;
    }
    void dfs(TreeNode* root, int low, int high) {
        if (root == NULL) return;
        
        if (root->val <= high && root->val >= low) {
            sum += root->val;
        }
            dfs(root->left, low, high);
            dfs(root->right, low, high);
    }
};