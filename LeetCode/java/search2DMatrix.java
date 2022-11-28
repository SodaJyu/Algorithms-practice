package java;
class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        if (matrix.length == 0) return false;
        
        int rows = matrix.length;
        int columns = matrix[0].length;
        
        int left = 0, right = rows * columns - 1, mid;
        
        while (left <= right) {
            mid = left + (right - left) / 2;
            int midpoint_element = matrix[mid / columns][mid % columns];
            if (midpoint_element == target) {
                return true;
            } else {
                if (target < midpoint_element) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }
        }
        return false;
    }
}
