class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (root == NULL) return false;
        return dfs(root->left, root->right);
        
    }
    
    bool dfs(TreeNode* a, TreeNode* b) {
        if (a == NULL && b == NULL) return true;
        else if (a == NULL || b == NULL) return false;
        else if (a->val != b->val) return false;
        
        return dfs(a->left, b->right) && dfs(a->right, b->left);
        
    }
};