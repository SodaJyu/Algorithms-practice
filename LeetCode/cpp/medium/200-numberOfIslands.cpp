class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == '1') {
                    count += 1;
                    helper(grid, i, j);
                }
            }
        }
        return count;
    }
    void helper(vector<vector<char>>& grid, int i, int j) {
        if (i >= grid.size() || i < 0){
            return;
        }
        if (j >= grid[0].size() || j < 0) {
            return;
        }
        if (grid[i][j] != '1') {
            return;
        }
        
        grid[i][j] = '0';
        
        helper(grid, i + 1, j);
        helper(grid, i - 1, j);
        helper(grid, i, j + 1);
        helper(grid, i, j - 1);
        
    }
};