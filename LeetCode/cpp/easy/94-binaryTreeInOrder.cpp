class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        dfs(root, result);
        return result;
        
    }
    void dfs(TreeNode* root, vector<int>& result) {
        if (root == NULL) return;
        
        dfs(root->left, result);
        result.push_back(root->val);
        dfs(root->right, result);
    }
};