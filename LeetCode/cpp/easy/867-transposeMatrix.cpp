class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> result;
        for (int i = 0; i < matrix[0].size(); i++) {
            vector<int> current;
            for (int j = 0; j < matrix.size(); j++) {
                current.push_back(matrix[j][i]);
            }
            result.push_back(current);
        }
        return result;
    }
};