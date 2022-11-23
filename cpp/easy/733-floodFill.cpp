class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int oldColor = image[sr][sc];
        dfs(image, sr, sc, oldColor, color);
        return image;
    }
    void dfs(vector<vector<int>>& grid, int row, int column, int oldColor, int color) {
        if (row < 0 || row >= grid.size()) return;
        if (column < 0 || column >= grid[0].size()) return;
        if (grid[row][column] == color) return;
        if (grid[row][column] != oldColor) return;
        if (color == NULL) return;
        
        grid[row][column] = color;
        
        dfs(grid, row + 1, column, oldColor, color);
        dfs(grid, row - 1, column, oldColor, color);
        dfs(grid, row, column + 1, oldColor, color);
        dfs(grid, row, column - 1, oldColor, color);
        
    }
};