class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> result;
        if (root == NULL) {
            return result;
        }
        dfs(root, result);
        return result;
        
    }
    
    void dfs(Node* root, vector<int>& result) {
        if (root == NULL) {
            return;
        }
        for (auto i: root->children) {
            dfs(i, result);
        }
        result.push_back(root->val);
    }
};