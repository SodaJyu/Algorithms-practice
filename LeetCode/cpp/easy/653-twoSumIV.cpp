class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int> result;
        dfs(root, result);
        int left = 0;
        int right = result.size() - 1;
        while (left < right)  {
            if (result[left] + result[right] == k) {
                return true;
            } else if (result[left] + result[right] > k) {
                right--;
            } else {
                left++;
            }
        }
        return false;
    }
    void dfs(TreeNode* root, vector<int>& result) {
        if (root == NULL) return;
        
        dfs(root->left, result);
        result.push_back(root->val);
        dfs(root->right, result);
    }
};