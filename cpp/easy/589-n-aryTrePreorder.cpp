class Solution {
public:
    vector<int> preorder(Node* root) {
        if (root == NULL) {
            return {};
        }
        vector<int> result;
        dfs(root, result);
        return result;
        
    }
    void dfs(Node* root, vector<int>& result) {
        if (root == NULL) {
            return;
        }
        result.push_back(root->val);
        for (auto i : root->children) {
            dfs(i, result);
        }
    }
};